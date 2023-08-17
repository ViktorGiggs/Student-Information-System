#include "registrationform.h"
#include "ui_registrationform.h"
#include <QFileDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QBuffer>

RegistrationForm::RegistrationForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegistrationForm)
{
    ui->setupUi(this);

    // Добавление вариантов выбора в существующий QComboBox
    ui->comboBox->addItem("1");
    ui->comboBox->addItem("2");

    ui->comboBox2->addItem("Biology");
    ui->comboBox2->addItem("Mathematics");
    ui->comboBox2->addItem("Physics");
    ui->comboBox2->addItem("Geography");
}

RegistrationForm::~RegistrationForm()
{
    delete ui;
}

void RegistrationForm::on_pushButton_2_clicked()
{
    close();
}

void RegistrationForm::on_pushButton_clicked()
{
    QString name = ui->regLineName->text();
    newRecord.setValue(2, name);
}




void RegistrationForm::on_pushButton_4_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Select a photo"), "", tr("Images (*.png *.jpg *.jpeg)"));
    if (!filePath.isEmpty()) {
        // Установка загруженной фотографии в QLabel
        QPixmap pixmap(filePath);
        if (!pixmap.isNull()) {
            // Масштабируем изображение, если необходимо
            pixmap = pixmap.scaled(ui->regPhotoLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
            ui->regPhotoLabel->setPixmap(pixmap);
        }
    }
}


void RegistrationForm::on_regButton_clicked()
{
    QString name = ui->regLineName->text();
    QString surname = ui->regLineSurname->text();
    QString username = ui->regLineUsername->text();
    QString password = ui->regLinePassword->text();

    // Проверка обязательных полей на заполнение
    if (name.isEmpty() || surname.isEmpty() || username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, заполните все обязательные поля.");
        return;
    }

    QPixmap photo = ui->regPhotoLabel->pixmap();  // Получаем фотографию из QLabel
    QByteArray photoData;
    QBuffer buffer(&photoData);
    buffer.open(QIODevice::WriteOnly);
    photo.toImage().save(&buffer, "JPEG", 100); // Здесь "100" означает качество изображения (от 0 до 100)

    // Проверка наличия записи с таким именем в базе данных
    QSqlQuery query;
    query.prepare("SELECT * FROM Students WHERE name = :name");
    query.bindValue(":name", name);
    query.exec();

    if (query.next()) {
        // Запись с таким именем уже существует
        QMessageBox::warning(this, "Registration error", "A user with this name is already registered.");
        return; // Прерываем регистрацию
    }

    // Продолжаем регистрацию, если запись не существует
    query.prepare("INSERT INTO Students (faculty, score, photo, groupname, arreas, name, surname, login, password) "
                  "VALUES (:faculty, 0, :photo, :groupname, 0, :name, :surname, :login, :password)");
    query.bindValue(":faculty", ui->comboBox2->currentText());
    query.bindValue(":photo", photoData); // Значение фотографии можно дополнить
    query.bindValue(":groupname", ui->comboBox->currentText());
    query.bindValue(":name", name);
    query.bindValue(":surname", surname);
    query.bindValue(":login", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Registration was successful.");
        close();
    } else {
        QMessageBox::critical(this, "Error", "Registration failed.");
    }
}

