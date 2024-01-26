#ifndef PIERPONTMAIN_H
#define PIERPONTMAIN_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QtSql>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui { class PierpontMain; }
QT_END_NAMESPACE

class PierpontMain : public QMainWindow
{
    Q_OBJECT

public:
    PierpontMain(QWidget *parent = nullptr);
    ~PierpontMain();

    QString main_password;
    QSqlDatabase database;

    void ConnOpen(){
        database = QSqlDatabase::addDatabase("QMYSQL");
        database.setHostName("HIDDEN FOR PRIVACY");
        database.setPort(3306);
        database.setUserName("HIDDEN FOR PRIVACY");
        database.setDatabaseName("HIDDEN FOR PRIVACY");
        database.setPassword(main_password);
    };

    void ConnClose(){
        database.close();
        database.removeDatabase(QSqlDatabase::defaultConnection);
    };
    //

private slots:
    void on_pushButton_3_clicked();

    void on_pushButtonConnect_clicked();

    void on_pushButton_2_clicked();

    void on_actionExit_triggered();

    void on_actionSign_Out_triggered();

    void on_actionPrint_triggered();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::PierpontMain *ui;

    QSqlTableModel *tabelModel;
};
#endif // PIERPONTMAIN_H
