// Copyright 2024, Andrew Drogalis
// GNU License

#ifndef PIERPONTMAIN_H
#define PIERPONTMAIN_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPrintDialog>
#include <QPrinter>
#include <QSqlDatabase>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui
{
class PierpontMain;
}
QT_END_NAMESPACE

class PierpontMain : public QMainWindow
{
    Q_OBJECT

  public:
    QString main_password;
    QSqlDatabase database;

    PierpontMain(QWidget* parent = nullptr);

    ~PierpontMain();

    PierpontMain(const PierpontMain& obj) = delete;

    PierpontMain& operator=(const PierpontMain& obj) = delete;

    PierpontMain(PierpontMain&& obj) = delete;

    PierpontMain& operator=(PierpontMain&& obj) = delete;

    void ConnOpen();

    void ConnClose();

  private slots:

    void SubmitPasswordAndConnectToDB();

    void DeleteMaintenanceRow();

    void AddMaintenanceRow();

    void DeleteConstructionRow();

    void AddConstructionRow();

    void DeleteMechanicRow();

    void AddMechanicRow();

    void ExitApplication();

    void LogOffSession();

    void PrintDatabase();

  private:
    Ui::PierpontMain* ui;
    QSqlTableModel* tableModel = nullptr;
};
#endif// PIERPONTMAIN_H
