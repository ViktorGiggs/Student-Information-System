#include "basicform.h"
#include "ui_basicform.h"

BasicForm::BasicForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BasicForm)
{
    ui->setupUi(this);
    dbCourses = QSqlDatabase::addDatabase("QSQLITE"); //driver
    dbCourses.setDatabaseName("database"); //path to the database

    if(dbCourses.open())
    {
        qDebug("db is open");
    }
    else
    {
        qDebug("db is NOT open");
    }

    // Display the "lectures" table on the screen
    modelCourses = new QSqlTableModel(this, dbCourses);
    modelCourses->setTable("lectures");
    modelCourses->select();
    ui->tableView->setModel(modelCourses);
    ui->tableView->hideColumn(0);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //read-only

    // My group table
    modelCourses2 = new QSqlTableModel(this, dbCourses);
    modelCourses2->setTable("Students");
    modelCourses2->select();
    ui->tableView_2->setModel(modelCourses2);
    ui->tableView_2->hideColumn(6);
    ui->tableView_2->hideColumn(7);
    ui->tableView_2->hideColumn(8);
    ui->tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers); //read-only
}

BasicForm::~BasicForm()
{
    delete ui;
}

void BasicForm::on_MyProfileLinkButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void BasicForm::on_MyCoursesLinkButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void BasicForm::on_MyGroupLinkButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void BasicForm::on_InformationLinkButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void BasicForm::slot(QString sname)
{
    ui->ProfielName->setText(sname);
}

void BasicForm::slotSurname(QString ssurname)
{
    ui->ProfileSurName->setText(ssurname);
}

void BasicForm::slotPhoto(QPixmap outPixmap)
{
    ui->ProfilePhoto->setScaledContents(true); // Enable QLabel content scaling
    ui->ProfilePhoto->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored); // Allow QLabel to resize

    ui->ProfilePhoto->setPixmap(outPixmap);
    qDebug() << "Received image size:" << outPixmap.size();
}

void BasicForm::slotFaculty(QString faculty)
{
    ui->ProfileFaculty->setText(faculty);
}

void BasicForm::slotGroup(QString group)
{
    ui->ProfileGroup->setText(group);
}

void BasicForm::slotScore(QString score)
{
    ui->ProfileTotalScore->setText(score);
}

void BasicForm::slotArreas(QString arreas)
{
    ui->ProfileArrears->setText(arreas);
}

void BasicForm::slotFilter(QString faculty)
{
    if (faculty == "Biology") {
        modelCourses->setFilter("faculty_lectures LIKE '%-bio%'");
        modelCourses2->setFilter("faculty = 'Biology'");
    } else if (faculty == "Mathematics") {
        modelCourses->setFilter("faculty_lectures LIKE '%-mat%'");
        modelCourses2->setFilter("faculty = 'Mathematics'");
    } else if (faculty == "Physics") {
        modelCourses->setFilter("faculty_lectures LIKE '%-phy%'");
        modelCourses2->setFilter("faculty = 'Physics'");
    } else if (faculty == "Geography") {
        modelCourses->setFilter("faculty_lectures LIKE '%-geo%'");
        modelCourses2->setFilter("faculty = 'Geography'");
    } else {
        // Remove any existing filter
        modelCourses->setFilter("");
        modelCourses2->setFilter("");
    }

    // Refresh the model to apply the filter
    modelCourses->select();
    modelCourses2->select();
}

