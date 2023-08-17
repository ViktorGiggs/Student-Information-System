#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    basicForm = new BasicForm;
    connect(this, &MainWindow::signal, basicForm, &BasicForm::slot);
    connect(this, &MainWindow::signalSurname, basicForm, &BasicForm::slotSurname);
    connect(this, &MainWindow::signalPhoto, basicForm,&BasicForm::slotPhoto);
    connect(this, &MainWindow::signalFaculty, basicForm, &BasicForm::slotFaculty);
    connect(this, &MainWindow::signalGroup, basicForm, &BasicForm::slotGroup);
    connect(this, &MainWindow::signalScore, basicForm, &BasicForm::slotScore);
    connect(this, &MainWindow::signalArreas, basicForm, &BasicForm::slotArreas);
    connect(this, &MainWindow::signalFilter, basicForm, &BasicForm::slotFilter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    form.show();
}

void MainWindow::on_pushButton_clicked()
{
    QString login = ui->lineLogin->text();
    QString password = ui->linePassword->text();

    QSqlQuery query;
    query.prepare("SELECT idstudent, faculty, name, surname, score, login, password, photo, groupname, arreas FROM Students WHERE login = :login AND password = :password");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    query.exec();

    if (query.next())
    {
        QPixmap outPixmap;
        QString sname = query.value(2).toString();
        QString ssurname = query.value(3).toString();
        QByteArray photo = query.value(7).toByteArray();
        qDebug() << "Received photo data size:" << photo.size();
        QString faculty = query.value(1).toString();
        QString group = query.value(8).toString();
        QString score = query.value(4).toString();
        QString arreas = query.value(9).toString();
        outPixmap.loadFromData(photo, "JPEG");
        qDebug() << "Is pixmap null?" << outPixmap.isNull();

        qDebug() << sname + " " + ssurname + " " + faculty << "is logged in";
        basicForm->show();
        emit signal(sname);
        emit signalSurname(ssurname);
        emit signalPhoto(outPixmap);
        emit signalFaculty(faculty);
        emit signalGroup(group);
        emit signalScore(score);
        emit signalArreas(arreas);
        emit signalFilter(faculty);
        close();
    }
    else if (ui->lineLogin->text() == "123" && ui->linePassword->text() == "123")
    {
        QMessageBox msgBox;
        msgBox.setText("ADMIN LOGIN");
        msgBox.exec();
        basicForm->show();
        close();
    }
    else
    {
        qDebug() << "Login failed. Invalid username or password.";
        QMessageBox ErrorMsgBox;
        ErrorMsgBox.setText("Login failed. Invalid username or password.");
        ErrorMsgBox.exec();
    }
}
