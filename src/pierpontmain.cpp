// Copyright 2024, Andrew Drogalis
// GNU License

#include "pierpontmain.h"
#include "ui_pierpontmain.h"

PierpontMain::PierpontMain(QWidget* parent) : QMainWindow(parent), ui(new Ui::PierpontMain)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

PierpontMain::~PierpontMain()
{
    if (tableModel) { delete tableModel; }
    delete ui;
}

void PierpontMain::ConnOpen()
{
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("HIDDEN FOR PRIVACY");
    database.setPort(3306);
    database.setUserName("HIDDEN FOR PRIVACY");
    database.setDatabaseName("HIDDEN FOR PRIVACY");
    database.setPassword(main_password);
}

void PierpontMain::ConnClose()
{
    database.close();
    database.removeDatabase(QSqlDatabase::defaultConnection);
}

void PierpontMain::SubmitPasswordAndConnectToDB()
{
    if (! database.open())
    {
        QString textFieldPassword = ui->lineEdit->text();
        if (textFieldPassword != "") { main_password = textFieldPassword; }
        ConnOpen();
    }

    if (database.open())
    {
        ui->lineEdit->setPlaceholderText("Password Saved");
        ui->lineEdit->setText("");
        ui->label_28->setText("⬤ DATABASE ONLINE");
        ui->label_28->setStyleSheet("#label_28{color:green;}");
        ui->tableView->setEnabled(true);

        if (! tableModel) { tableModel = new QSqlTableModel; }

        if (ui->comboBox->currentText() == "Mechanic Personnel")
        {
            tableModel->setTable("Mechanic_Personnel");
            tableModel->select();
            ui->tableView->setModel(tableModel);
            ui->tableView->hideColumn(0);
            ui->stackedWidget->setCurrentIndex(1);
        }
        else if (ui->comboBox->currentText() == "Maintenance Clients")
        {
            tableModel->setTable("Maintenance_Clients");
            tableModel->select();
            ui->tableView->setModel(tableModel);
            ui->tableView->hideColumn(0);
            ui->stackedWidget->setCurrentIndex(0);
        }
        else if (ui->comboBox->currentText() == "Construction Clients")
        {
            tableModel->setTable("Construction_Clients");
            tableModel->select();
            ui->tableView->setModel(tableModel);
            ui->tableView->hideColumn(0);
            ui->stackedWidget->setCurrentIndex(2);
        }
    }
    else { QMessageBox::information(this, "Password Incorrect", "Re-Enter Password & Check Internet Connection."); }
}

void PierpontMain::DeleteMaintenanceRow()
{
    QString const id = ui->lineEdit_10->text();
    bool flag;
    int const id2 = id.toInt(&flag);
    if (flag)
    {
        if (database.open())
        {
            tableModel->removeRow(id2 - 1);
            if (tableModel->submitAll()) { tableModel->database().commit(); }
            else { tableModel->database().rollback(); }
            // ----------------------------
            tableModel->setTable("Maintenance_Clients");
            tableModel->select();
            ui->tableView->setModel(tableModel);
            ui->tableView->hideColumn(0);
            ui->lineEdit_10->setText("");
        }
    }
    else { QMessageBox::warning(this, "Number Invalid", "Please enter whole number with NO letters or symbols."); }
}

void PierpontMain::AddMaintenanceRow()
{
    QString displayname, name, address, email;

    displayname = ui->lineEdit_2->text();
    name = ui->lineEdit_3->text();
    address = ui->lineEdit_4->text();
    email = ui->lineEdit_5->text();

    if (displayname == "") { displayname = name; }

    int const len = displayname.length();
    QString const s = QString::number(len);

    if (len > 56)
    {
        QMessageBox::warning(this, "Display Name Character Limit",
                             "Currently: '" + s + "' Characters \nRemove Characters from Display Name (Auto Filled Name)");
    }
    else
    {
        if (database.open())
        {
            QSqlRecord record = tableModel->record();
            /* Since the id field has the auto-increment attribute,
             * it is not necessary to indicate its value.
             * Remove the ID so the DB generates it for us. */
            record.remove(record.indexOf("id"));
            record.setValue("display_name", displayname);
            record.setValue("name", name);
            record.setValue("address", address);
            record.setValue("email_address", email);
            /*-1 is set to indicate that it will be added to the last row*/
            if (tableModel->insertRecord(-1, record))
            {
                tableModel->submitAll();
                tableModel->setTable("Maintenance_Clients");
                tableModel->select();
                ui->tableView->setModel(tableModel);
                ui->tableView->hideColumn(0);
                ui->lineEdit_2->setText("");
                ui->lineEdit_3->setText("");
                ui->lineEdit_4->setText("");
                ui->lineEdit_5->setText("");
            }
            else { database.rollback(); }
        }
        else { QMessageBox::warning(this, "Connection Lost", "Please Re-Connect."); }
    }
}

void PierpontMain::DeleteConstructionRow()
{
    QString const id = ui->lineEdit_13->text();
    bool flag;
    int const id2 = id.toInt(&flag);
    if (flag)
    {
        if (database.open())
        {
            tableModel->removeRow(id2 - 1);
            if (tableModel->submitAll()) { tableModel->database().commit(); }
            else { tableModel->database().rollback(); }
            // ----------------------------
            tableModel->setTable("Construction_Clients");
            tableModel->select();
            ui->tableView->setModel(tableModel);
            ui->tableView->hideColumn(0);
            ui->lineEdit_13->setText("");
        }
    }
    else { QMessageBox::warning(this, "Number Invalid", "Please enter whole number with NO letters or symbols."); }
}

void PierpontMain::AddConstructionRow()
{
    QString displayname, name, address, jobnumber;

    displayname = ui->lineEdit_8->text();
    name = ui->lineEdit_6->text();
    address = ui->lineEdit_9->text();
    jobnumber = ui->lineEdit_7->text();

    // database.transaction();
    if (displayname == "") { displayname = name; }

    int const len = displayname.length();
    QString const s = QString::number(len);

    if (len > 56)
    {
        QMessageBox::warning(this, "Display Name Character Limit",
                             "Currently: '" + s + "' Characters \nRemove Characters from Display Name (Auto Filled Name)");
    }
    else
    {
        if (database.open())
        {
            QSqlRecord record = tableModel->record();
            /* Since the id field has the auto-increment attribute,
             * it is not necessary to indicate its value.
             * Remove the ID so the DB generates it for us. */
            record.remove(record.indexOf("id"));
            record.setValue("display_name", displayname);
            record.setValue("name", name);
            record.setValue("address", address);
            record.setValue("job_number", jobnumber);
            /*-1 is set to indicate that it will be added to the last row*/
            if (tableModel->insertRecord(-1, record))
            {
                tableModel->submitAll();
                tableModel->setTable("Construction_Clients");
                tableModel->select();
                ui->tableView->setModel(tableModel);
                ui->tableView->hideColumn(0);
                ui->lineEdit_8->setText("");
                ui->lineEdit_6->setText("");
                ui->lineEdit_9->setText("");
                ui->lineEdit_7->setText("");
            }
            else { database.rollback(); }
        }
        else { QMessageBox::warning(this, "Connection Lost", "Please Re-Connect."); }
    }
}

void PierpontMain::DeleteMechanicRow()
{
    QString const id = ui->lineEdit_11->text();
    bool flag;
    int const id2 = id.toInt(&flag);
    if (flag)
    {
        if (database.open())
        {
            tableModel->removeRow(id2 - 1);
            if (tableModel->submitAll()) { tableModel->database().commit(); }
            else { tableModel->database().rollback(); }
            // ----------------------------
            tableModel->setTable("Mechanic_Personnel");
            tableModel->select();
            ui->tableView->setModel(tableModel);
            ui->tableView->hideColumn(0);
            ui->lineEdit_11->setText("");
        }
    }
    else { QMessageBox::warning(this, "Number Invalid", "Please enter whole number with NO letters or symbols."); }
}

void PierpontMain::AddMechanicRow()
{
    QString const name = ui->lineEdit_12->text();

    if (database.open())
    {
        QSqlRecord record = tableModel->record();
        /* Since the id field has the auto-increment attribute,
         * it is not necessary to indicate its value.
         * Remove the ID so the DB generates it for us. */
        record.remove(record.indexOf("id"));
        record.setValue("name", name);

        /*-1 is set to indicate that it will be added to the last row*/
        if (tableModel->insertRecord(-1, record))
        {
            tableModel->submitAll();
            tableModel->setTable("Mechanic_Personnel");
            tableModel->select();
            ui->tableView->setModel(tableModel);
            ui->tableView->hideColumn(0);
            ui->lineEdit_12->setText("");
        }
        else { database.rollback(); }
    }
    else { QMessageBox::warning(this, "Connection Lost", "Please Re-Connect."); }
}

void PierpontMain::ExitApplication() { QApplication::quit(); }

void PierpontMain::LogOffSession()
{
    main_password = "";
    ui->lineEdit->setPlaceholderText("");
    ui->label_28->setText("⬤ DATABASE OFFLINE");
    ui->label_28->setStyleSheet("#label_28{color:red;}");
    ui->tableView->setEnabled(false);
    ConnClose();
}

void PierpontMain::PrintDatabase()
{
    QString const strTitle = "Table_ViewDocument";
    QString strStream;
    QTextStream out(&strStream);

    out << "<html>\n"
           "<head>\n"
           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << QString("<title>%1</title>\n").arg(strTitle)
        << "</head>\n"
           "<body bgcolor=#ffffff link=#5000A0>\n"
           "<table border=1 cellspacing=0 cellpadding=2>\n";

    // headers
    out << "<thead><tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (! ui->tableView->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    const int rowCount = ui->tableView->model()->rowCount();
    const int columnCount = ui->tableView->model()->columnCount();

    // data table
    for (int row = 0; row < rowCount; ++row)
    {
        out << "<tr>";
        for (int column = 0; column < columnCount; ++column)
        {
            if (! ui->tableView->isColumnHidden(column))
            {
                QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((! data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out << "</table>\n"
           "</body>\n"
           "</html>\n";

    QTextDocument* document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer;

    QPrintDialog* dialog = new QPrintDialog(&printer, NULL);
    if (dialog->exec() == QDialog::Accepted) { document->print(&printer); }

    delete document;
    delete dialog;
}