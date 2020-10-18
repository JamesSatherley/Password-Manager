#include "dialog.h"
#include "ui_dialog.h"
#include "QFile"
#include "QTextStream"
#include <credentials.cpp>
#include "credentials.h"
#include <QVector>
#include <sstream>
#include <QByteArray>
#include <QDebug>
#include <QString>
QVector <credentials> allData;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QFile inputFile {"d:\\159100\\data.txt"};
    inputFile.open(QIODevice::ReadOnly);

    while(!inputFile.atEnd()){
        QString line = {inputFile.readLine()};
        line.remove("\n");
        QStringList list1 = line.split(QString(".|-|."));
        ui->websiteBrowser->append(list1[0]);
        ui->usernameBrowser->append(list1[1]);
        ui->passwordBrowser->append(list1[2]); //items need to be define as credential classes








    }
    inputFile.close();

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_deleteButton_clicked()
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

void Dialog::on_addButton_clicked()
{
    credentials current{ui -> websiteEdit -> text(), ui -> usernameEdit -> text(), ui -> passwordEdit -> text()};
    allData.append(current);
    ui->websiteBrowser->append("ID: " + QString::number(allData.length()) + " " + current.getWebsite());
    ui->usernameBrowser->append(current.getUsername());
    ui->passwordBrowser->append(current.getPassword());
    ui->websiteEdit->setText("");
    ui->usernameEdit->setText("");
    ui->passwordEdit->setText("");
}

void Dialog::on_saveButton_clicked()
{
    QFile outputFile {"d:\\159100\\data.txt"};
    QTextStream outputStream {&outputFile};
    outputFile.open(QIODevice::WriteOnly);

    for(int i = 0; i < allData.length(); i++){
        credentials x = allData.at(i);
        outputStream << x.getWebsite() << ".|-|." << x.getPassword() << ".|-|." << x.getUsername();
    }
    outputFile.close();
}


//QCoreApplication::aboutToQuit()
