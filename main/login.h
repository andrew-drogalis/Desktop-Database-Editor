#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <pierpontmain.h>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    QString main_password;
    QSqlDatabase database;

    void ConnOpen(){
        database = QSqlDatabase::addDatabase("QMYSQL");
        database.setHostName("HIDDEN FOR PRIVACY");
        database.setPort(3306);
        database.setUserName("HIDDEN FOR PRIVACYn");
        database.setDatabaseName("HIDDEN FOR PRIVACY");
        database.setPassword(main_password);
    };

private slots:
    void on_pushButton_clicked();

private:
    Ui::Login *ui;

};

#endif // LOGIN_H
