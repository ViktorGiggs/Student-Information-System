#ifndef REGISTRATIONFORM_H
#define REGISTRATIONFORM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QByteArray>
#include <QSqlRecord>
#include "basicform.h"
#include <QComboBox>


namespace Ui {
class RegistrationForm;
}

class RegistrationForm : public QWidget
{
    Q_OBJECT

public:
    explicit RegistrationForm(QWidget *parent = nullptr);
    ~RegistrationForm();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_regButton_clicked();

private:
    Ui::RegistrationForm *ui;
    QSqlRecord newRecord;
    QString defaultFaculty;
    QString defaultGroup;
};

#endif // REGISTRATIONFORM_H
