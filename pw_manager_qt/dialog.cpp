#include "dialog.h"
#include "ui_dialog.h"
#include <credentials.cpp>
#include "credentials.h"
#include "QFile"
#include "QTextStream"
#include <QVector>
#include <sstream>
#include <QMessageBox>
#include <QPushButton>
QVector <credentials> allData;
void exportFile();
void importFile();

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    importFile();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_deleteButton_clicked()
{
    if(ui->deleteEdit->text().toInt() < 1 || ui->deleteEdit->text().toInt() > allData.length())
    {
        QMessageBox messageBox;
        messageBox.warning(0,"Empty Data","Please enter a correct ID");
        messageBox.setFixedSize(500,200);
    }else
    {
        int id = ui -> deleteEdit -> text().toInt();
        id--;
        allData.remove(id);
        ui->websiteBrowser->clear();
        ui->usernameBrowser->clear();
        ui->passwordBrowser->clear();
        for(int i = 0; i < allData.length(); i++){
            credentials x = allData.at(i);
            ui->websiteBrowser->append("ID: " + QString::number(i+1) + " " + x.getWebsite());
            ui->usernameBrowser->append(x.getUsername());
            ui->passwordBrowser->append(x.getPassword());
        }
    }
    ui->deleteEdit->clear();

    ui->deleteEdit->setStyleSheet(
        "background-color: red;"
        "border-style: outset;"
        "border-width: 2px;"
        "border-radius: 10px;"
        "border-color: beige;"
        "font: bold 14px;"
        "min-width: 10em;"
"padding: 6px;");
}

void Dialog::on_addButton_clicked()
{
    if (ui->websiteEdit->text().isEmpty() || ui->usernameEdit->text().isEmpty() || ui->passwordEdit->text().isEmpty())
    {
        QMessageBox messageBox;
        messageBox.warning(0,"Empty Data","Please enter something");
        messageBox.setFixedSize(500,200);
    }else
    {
        credentials current{ui -> websiteEdit -> text(), ui -> usernameEdit -> text(), ui -> passwordEdit -> text()};
        allData.append(current);

        ui-> websiteBrowser->append("ID: " + QString::number(allData.length()) + " " + current.getWebsite());
        ui->usernameBrowser->append(current.getUsername());
        ui->passwordBrowser->append(current.getPassword());

        ui-> websiteEdit->setText("");
        ui->usernameEdit->setText("");
        ui->passwordEdit->setText("");
    }
}

void Dialog::on_saveButton_clicked()
{
    exportFile();
    QMessageBox messageBox;
    messageBox.information(0,"Saved","Saved succesfully");
    messageBox.setFixedSize(500,200);
}

void Dialog::importFile()
{
    QFile inputFile {"d:\\159100\\data.txt"};
    inputFile.open(QIODevice::ReadOnly);
    while(!inputFile.atEnd()){
        QString line = {inputFile.readLine()};
        line.remove("\n");
        QStringList list1 = line.split(QString(".|-|."));
        credentials current{list1[0], list1[1], list1[2]};
        allData.append(current);
        ui->websiteBrowser->append("ID: " + QString::number(allData.length()) + list1[0]);
        ui->usernameBrowser->append(list1[1]);
        ui->passwordBrowser->append(current.getPassword());
    }
    inputFile.close();
}

void Dialog::exportFile(){
    QFile outputFile {"d:\\159100\\data.txt"};
    QTextStream outputStream {&outputFile};
    outputFile.open(QIODevice::WriteOnly);

    for(int i = 0; i < allData.length(); i++){
        credentials x = allData.at(i);
        outputStream << x.getWebsite() << ".|-|." << x.getPassword() << ".|-|." << x.getUsername() << "\n";
    }
    outputFile.close();
}
