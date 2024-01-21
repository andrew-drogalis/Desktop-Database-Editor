#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)

{
    ui->setupUi(this);

}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    PierpontMain w;

    main_password = ui->lineEdit->text();

    ConnOpen();

    if (database.open()) {
        this->hide();
        w.main_password = ui->lineEdit->text();
        database.close();
        w.show();

    } else{
       QMessageBox::information(this,"DataBase Login Failed","Problems with Password or Internet Connection.");
    }
}

