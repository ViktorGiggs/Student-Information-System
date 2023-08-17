/********************************************************************************
** Form generated from reading UI file 'registrationform.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONFORM_H
#define UI_REGISTRATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationForm
{
public:
    QLabel *label;
    QPushButton *regButton;
    QPushButton *pushButton_2;
    QLineEdit *regLineName;
    QLineEdit *regLineSurname;
    QLineEdit *regLineUsername;
    QLineEdit *regLinePassword;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *regPhotoLabel;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QComboBox *comboBox2;

    void setupUi(QWidget *RegistrationForm)
    {
        if (RegistrationForm->objectName().isEmpty())
            RegistrationForm->setObjectName(QString::fromUtf8("RegistrationForm"));
        RegistrationForm->resize(478, 634);
        RegistrationForm->setMinimumSize(QSize(478, 634));
        RegistrationForm->setMaximumSize(QSize(478, 634));
        label = new QLabel(RegistrationForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 241, 51));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        regButton = new QPushButton(RegistrationForm);
        regButton->setObjectName(QString::fromUtf8("regButton"));
        regButton->setGeometry(QRect(110, 550, 111, 41));
        QFont font1;
        font1.setPointSize(12);
        regButton->setFont(font1);
        pushButton_2 = new QPushButton(RegistrationForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 550, 111, 41));
        pushButton_2->setFont(font1);
        regLineName = new QLineEdit(RegistrationForm);
        regLineName->setObjectName(QString::fromUtf8("regLineName"));
        regLineName->setGeometry(QRect(170, 70, 211, 41));
        regLineName->setFont(font1);
        regLineSurname = new QLineEdit(RegistrationForm);
        regLineSurname->setObjectName(QString::fromUtf8("regLineSurname"));
        regLineSurname->setGeometry(QRect(170, 140, 211, 41));
        regLineSurname->setFont(font1);
        regLineUsername = new QLineEdit(RegistrationForm);
        regLineUsername->setObjectName(QString::fromUtf8("regLineUsername"));
        regLineUsername->setGeometry(QRect(170, 410, 211, 41));
        regLineUsername->setFont(font1);
        regLinePassword = new QLineEdit(RegistrationForm);
        regLinePassword->setObjectName(QString::fromUtf8("regLinePassword"));
        regLinePassword->setGeometry(QRect(170, 480, 211, 41));
        regLinePassword->setFont(font1);
        label_2 = new QLabel(RegistrationForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 60, 71, 59));
        label_2->setFont(font1);
        label_4 = new QLabel(RegistrationForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 120, 81, 75));
        label_4->setFont(font1);
        label_5 = new QLabel(RegistrationForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 210, 81, 41));
        label_5->setFont(font1);
        label_7 = new QLabel(RegistrationForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 280, 71, 41));
        label_7->setFont(font1);
        label_3 = new QLabel(RegistrationForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 480, 91, 41));
        label_3->setFont(font1);
        label_6 = new QLabel(RegistrationForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 400, 81, 51));
        label_6->setFont(font1);
        comboBox = new QComboBox(RegistrationForm);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(170, 280, 211, 41));
        regPhotoLabel = new QLabel(RegistrationForm);
        regPhotoLabel->setObjectName(QString::fromUtf8("regPhotoLabel"));
        regPhotoLabel->setGeometry(QRect(310, 350, 71, 41));
        pushButton_4 = new QPushButton(RegistrationForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(170, 350, 131, 29));
        label_8 = new QLabel(RegistrationForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 350, 63, 20));
        label_8->setFont(font1);
        comboBox2 = new QComboBox(RegistrationForm);
        comboBox2->setObjectName(QString::fromUtf8("comboBox2"));
        comboBox2->setGeometry(QRect(170, 210, 211, 41));

        retranslateUi(RegistrationForm);

        QMetaObject::connectSlotsByName(RegistrationForm);
    } // setupUi

    void retranslateUi(QWidget *RegistrationForm)
    {
        RegistrationForm->setWindowTitle(QCoreApplication::translate("RegistrationForm", "Registration", nullptr));
        label->setText(QCoreApplication::translate("RegistrationForm", "Registration form", nullptr));
        regButton->setText(QCoreApplication::translate("RegistrationForm", "Registration", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RegistrationForm", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrationForm", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("RegistrationForm", "Surname", nullptr));
        label_5->setText(QCoreApplication::translate("RegistrationForm", "Faculty", nullptr));
        label_7->setText(QCoreApplication::translate("RegistrationForm", "Group", nullptr));
        label_3->setText(QCoreApplication::translate("RegistrationForm", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("RegistrationForm", "Usrname", nullptr));
        regPhotoLabel->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("RegistrationForm", "Choose a photo", nullptr));
        label_8->setText(QCoreApplication::translate("RegistrationForm", "Photo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationForm: public Ui_RegistrationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONFORM_H
