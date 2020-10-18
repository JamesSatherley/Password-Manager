/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *addRemoveGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *addButtonLabel;
    QPushButton *addButton;
    QLineEdit *usernameEdit;
    QLabel *deleteButtonLabel;
    QLineEdit *deleteEdit;
    QLabel *websiteEditLabel;
    QPushButton *deleteButton;
    QLineEdit *websiteEdit;
    QLineEdit *passwordEdit;
    QLabel *deleteEditLabel;
    QLabel *emailEditLabel;
    QLabel *passwordEditLabel;
    QGroupBox *detailsGroupBox;
    QGridLayout *gridLayout;
    QLabel *websiteBrowserLabel;
    QLabel *emailBrowserLabel;
    QLabel *passwordBrowserLabel;
    QTextBrowser *websiteBrowser;
    QTextBrowser *usernameBrowser;
    QTextBrowser *passwordBrowser;
    QGroupBox *outputGroupBox;
    QPushButton *saveButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        addRemoveGroupBox = new QGroupBox(Dialog);
        addRemoveGroupBox->setObjectName(QString::fromUtf8("addRemoveGroupBox"));
        addRemoveGroupBox->setGeometry(QRect(10, 10, 781, 81));
        gridLayout_2 = new QGridLayout(addRemoveGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        addButtonLabel = new QLabel(addRemoveGroupBox);
        addButtonLabel->setObjectName(QString::fromUtf8("addButtonLabel"));
        addButtonLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(addButtonLabel, 0, 6, 1, 1);

        addButton = new QPushButton(addRemoveGroupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(addButton, 1, 6, 1, 1);

        usernameEdit = new QLineEdit(addRemoveGroupBox);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));

        gridLayout_2->addWidget(usernameEdit, 1, 3, 1, 1);

        deleteButtonLabel = new QLabel(addRemoveGroupBox);
        deleteButtonLabel->setObjectName(QString::fromUtf8("deleteButtonLabel"));
        deleteButtonLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(deleteButtonLabel, 0, 1, 1, 1);

        deleteEdit = new QLineEdit(addRemoveGroupBox);
        deleteEdit->setObjectName(QString::fromUtf8("deleteEdit"));

        gridLayout_2->addWidget(deleteEdit, 1, 0, 1, 1);

        websiteEditLabel = new QLabel(addRemoveGroupBox);
        websiteEditLabel->setObjectName(QString::fromUtf8("websiteEditLabel"));
        websiteEditLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(websiteEditLabel, 0, 2, 1, 1);

        deleteButton = new QPushButton(addRemoveGroupBox);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout_2->addWidget(deleteButton, 1, 1, 1, 1);

        websiteEdit = new QLineEdit(addRemoveGroupBox);
        websiteEdit->setObjectName(QString::fromUtf8("websiteEdit"));

        gridLayout_2->addWidget(websiteEdit, 1, 2, 1, 1);

        passwordEdit = new QLineEdit(addRemoveGroupBox);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));

        gridLayout_2->addWidget(passwordEdit, 1, 4, 1, 2);

        deleteEditLabel = new QLabel(addRemoveGroupBox);
        deleteEditLabel->setObjectName(QString::fromUtf8("deleteEditLabel"));
        deleteEditLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(deleteEditLabel, 0, 0, 1, 1);

        emailEditLabel = new QLabel(addRemoveGroupBox);
        emailEditLabel->setObjectName(QString::fromUtf8("emailEditLabel"));
        emailEditLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(emailEditLabel, 0, 3, 1, 1);

        passwordEditLabel = new QLabel(addRemoveGroupBox);
        passwordEditLabel->setObjectName(QString::fromUtf8("passwordEditLabel"));
        passwordEditLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(passwordEditLabel, 0, 4, 1, 2);

        detailsGroupBox = new QGroupBox(Dialog);
        detailsGroupBox->setObjectName(QString::fromUtf8("detailsGroupBox"));
        detailsGroupBox->setGeometry(QRect(10, 100, 781, 411));
        gridLayout = new QGridLayout(detailsGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        websiteBrowserLabel = new QLabel(detailsGroupBox);
        websiteBrowserLabel->setObjectName(QString::fromUtf8("websiteBrowserLabel"));
        websiteBrowserLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(websiteBrowserLabel, 0, 0, 1, 1);

        emailBrowserLabel = new QLabel(detailsGroupBox);
        emailBrowserLabel->setObjectName(QString::fromUtf8("emailBrowserLabel"));
        emailBrowserLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(emailBrowserLabel, 0, 1, 1, 1);

        passwordBrowserLabel = new QLabel(detailsGroupBox);
        passwordBrowserLabel->setObjectName(QString::fromUtf8("passwordBrowserLabel"));
        passwordBrowserLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(passwordBrowserLabel, 0, 2, 1, 1);

        websiteBrowser = new QTextBrowser(detailsGroupBox);
        websiteBrowser->setObjectName(QString::fromUtf8("websiteBrowser"));

        gridLayout->addWidget(websiteBrowser, 1, 0, 1, 1);

        usernameBrowser = new QTextBrowser(detailsGroupBox);
        usernameBrowser->setObjectName(QString::fromUtf8("usernameBrowser"));

        gridLayout->addWidget(usernameBrowser, 1, 1, 1, 1);

        passwordBrowser = new QTextBrowser(detailsGroupBox);
        passwordBrowser->setObjectName(QString::fromUtf8("passwordBrowser"));

        gridLayout->addWidget(passwordBrowser, 1, 2, 1, 1);

        outputGroupBox = new QGroupBox(Dialog);
        outputGroupBox->setObjectName(QString::fromUtf8("outputGroupBox"));
        outputGroupBox->setGeometry(QRect(10, 520, 781, 71));
        saveButton = new QPushButton(outputGroupBox);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(10, 22, 761, 41));
        outputGroupBox->raise();
        detailsGroupBox->raise();
        addRemoveGroupBox->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        addRemoveGroupBox->setTitle(QCoreApplication::translate("Dialog", "Add/Remove", nullptr));
        addButtonLabel->setText(QCoreApplication::translate("Dialog", "Add the details", nullptr));
        addButton->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        deleteButtonLabel->setText(QCoreApplication::translate("Dialog", "Delete entry", nullptr));
        websiteEditLabel->setText(QCoreApplication::translate("Dialog", "Enter website", nullptr));
        deleteButton->setText(QCoreApplication::translate("Dialog", "Delete", nullptr));
        deleteEditLabel->setText(QCoreApplication::translate("Dialog", "Enter deletion ID", nullptr));
        emailEditLabel->setText(QCoreApplication::translate("Dialog", "Enter email or username", nullptr));
        passwordEditLabel->setText(QCoreApplication::translate("Dialog", "Enter Password", nullptr));
        detailsGroupBox->setTitle(QCoreApplication::translate("Dialog", "Details", nullptr));
        websiteBrowserLabel->setText(QCoreApplication::translate("Dialog", "Websites", nullptr));
        emailBrowserLabel->setText(QCoreApplication::translate("Dialog", "Emails/Usernames", nullptr));
        passwordBrowserLabel->setText(QCoreApplication::translate("Dialog", "Passwords", nullptr));
        outputGroupBox->setTitle(QCoreApplication::translate("Dialog", "Output", nullptr));
        saveButton->setText(QCoreApplication::translate("Dialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
