#ifndef BASICFORM_H
#define BASICFORM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlQuery>
#include <QPixmap>
#include <QByteArray>

namespace Ui {
class BasicForm;
}

class BasicForm : public QWidget
{
    Q_OBJECT

public:
    explicit BasicForm(QWidget *parent = nullptr);
    QSqlDatabase dbCourses;
    ~BasicForm();

private slots:



    void on_MyProfileLinkButton_clicked();

    void on_MyCoursesLinkButton_clicked();

    void on_MyGroupLinkButton_clicked();

    void on_InformationLinkButton_clicked();

private:
    Ui::BasicForm *ui;
    QSqlTableModel *modelCourses;
    QSqlTableModel *modelCourses2;

public slots:
    void slot(QString sname);
    void slotSurname(QString ssurname);
    void slotPhoto(QPixmap outPixmap);
    void slotFaculty(QString faculty);
    void slotGroup(QString group);
    void slotScore(QString score);
    void slotArreas(QString arreas);
    void slotFilter(QString faculty);
};

#endif // BASICFORM_H
