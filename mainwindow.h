#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <registrationform.h>
#include "basicform.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTableView>
#include <QSqlQuery>
#include <QPixmap>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    RegistrationForm form;
    BasicForm *basicForm;
signals:
    void signal(QString sname);
    void signalSurname(QString ssurname);
    void signalPhoto(QPixmap outPixmap);
    void signalFaculty(QString faculty);
    void signalGroup(QString group);
    void signalScore(QString score);
    void signalArreas(QString arreas);
    void signalFilter(QString faculty);
};
#endif // MAINWINDOW_H
