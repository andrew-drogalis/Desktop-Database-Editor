#include "pierpontmain.h"
#include "ui_pierpontmain.h"

PierpontMain::PierpontMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PierpontMain)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    // Init

}

PierpontMain::~PierpontMain()
{
    delete ui;
}

void PierpontMain::on_pushButton_2_clicked()
{
    // DELETE MAINTENANCE ROW
    QString id;
    bool flag;
    id = ui->lineEdit_10->text();
    int id2 = id.toInt(&flag);
    if (flag){
        if (database.open()){
            tabelModel->removeRow(id2-1);
            if(tabelModel->submitAll() ) {
                tabelModel->database().commit();
            } else {
                tabelModel->database().rollback();
            }
            tabelModel->setTable("Maintenance_Clients");
            tabelModel->select();
            ui->tableView->setModel(tabelModel);
            ui->tableView->hideColumn(0);
            ui->lineEdit_10->setText("");
        }
    } else {
        QMessageBox::warning(this,"Number Invalid","Please enter whole number with NO letters or symbols.");
    }
}

void PierpontMain::on_pushButton_3_clicked()
{
    // MAINTENANCE ADD ROW
    QString displayname, name, address, email;

    displayname = ui->lineEdit_2->text();
    name = ui->lineEdit_3->text();
    address = ui->lineEdit_4->text();
    email = ui->lineEdit_5->text();

    //.transaction();
    if (displayname == "") {
        displayname = name;
    }

    int len = displayname.length();
    QString s = QString::number(len);

    if (len > 56){
        QMessageBox::warning(this,"Display Name Character Limit","Currently: '"+s+"' Characters \nRemove Characters from Display Name (Auto Filled Name)");
    }
    else {
        if (database.open()){
            QSqlRecord record = tabelModel->record();
            /* since the id field has the autoincrement attribute,
            * it is not necessary to indicate its value,
            * that is because this field of the request is removed.
            */
            record.remove(record.indexOf("id"));
            record.setValue("display_name", displayname);
            record.setValue("name", name);
            record.setValue("address", address);
            record.setValue("email_address", email);
            /*-1 is set to indicate that it will be added to the last row*/
            if(tabelModel->insertRecord(-1, record)){
                tabelModel->submitAll();
                tabelModel->setTable("Maintenance_Clients");
                tabelModel->select();
                ui->tableView->setModel(tabelModel);
                ui->tableView->hideColumn(0);
                ui->lineEdit_2->setText("");
                ui->lineEdit_3->setText("");
                ui->lineEdit_4->setText("");
                ui->lineEdit_5->setText("");
            }
            else{
                database.rollback();
            }
        }else {
            QMessageBox::warning(this,"Connection Lost","Please Re-Connect.");
        }
    }
}

void PierpontMain::on_pushButtonConnect_clicked()
{
    // Check if Password is Saved
    if (main_password == "" || !database.open()){
        ConnOpen();
        if (!database.open()) {
            main_password = ui->lineEdit->text();
            ConnOpen();
        }
    }

    if (database.open()) {
        ui->lineEdit->setPlaceholderText("Password Saved");
        ui->lineEdit->setText("");
        ui->label_28->setText("⬤ DATABASE ONLINE");
        ui->label_28->setStyleSheet("#label_28{color:green;}");
        ui->tableView->setEnabled(true);

        tabelModel = new QSqlTableModel;

        if(ui->comboBox->currentText() == "Mechanic Personnel"){
            tabelModel->setTable("Mechanic_Personnel");
            tabelModel->select();
            ui->tableView->setModel(tabelModel);
            ui->tableView->hideColumn(0);
            ui->stackedWidget->setCurrentIndex(1);
        } else if(ui->comboBox->currentText() == "Maintenance Clients"){
            tabelModel->setTable("Maintenance_Clients");
            tabelModel->select();
            ui->tableView->setModel(tabelModel);
            ui->tableView->hideColumn(0);
            ui->stackedWidget->setCurrentIndex(0);
        }
        else if(ui->comboBox->currentText() == "Construction Clients"){
            tabelModel->setTable("Construction_Clients");
            tabelModel->select();
            ui->tableView->setModel(tabelModel);
            ui->tableView->hideColumn(0);
            ui->stackedWidget->setCurrentIndex(2);
        }

    } else{
        QMessageBox::information(this,"Password Incorrect","Re-Enter Password & Check Internet Connection.");
    }

    // Where username='"+username+"'
}

void PierpontMain::on_actionExit_triggered()
{
    QApplication::quit();
}


void PierpontMain::on_actionSign_Out_triggered()
{
    main_password = "";
    ui->lineEdit->setPlaceholderText("");
    ui->label_28->setText("⬤ DATABASE OFFLINE");
    ui->label_28->setStyleSheet("#label_28{color:red;}");
    ui->tableView->setEnabled(false);
    ConnClose();
}


void PierpontMain::on_actionPrint_triggered()
{
    //QPrinter printer;
    //QPrintDialog dialog(&printer,this);
    //dialog.setWindowTitle("Print Table");

    //Here is a variation of the first answer that gets rid of the intermediate file.
    QString strTitle = "Table_ViewDocument";
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tableView->model()->rowCount();
    const int columnCount = ui->tableView->model()->columnCount();

    out <<  "<html>\n"
        "<head>\n"
        "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        <<  QString("<title>%1</title>\n").arg(strTitle)
        <<  "</head>\n"
        "<body bgcolor=#ffffff link=#5000A0>\n"
        "<table border=1 cellspacing=0 cellpadding=2>\n";

    // headers
    out << "<thead><tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tableView->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tableView->isColumnHidden(column)) {
                QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
        "</body>\n"
        "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer;

    QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
    if (dialog->exec() == QDialog::Accepted) {
        document->print(&printer);
    }

    delete document;

}


void PierpontMain::on_pushButton_5_clicked()
{
    // CONSTRUCTION ADD ROW
    QString displayname, name, address, jobnumber;

    displayname = ui->lineEdit_8->text();
    name = ui->lineEdit_6->text();
    address = ui->lineEdit_9->text();
    jobnumber = ui->lineEdit_7->text();

    //database.transaction();
    if (displayname == "") {
        displayname = name;
    }

    int len = displayname.length();
    QString s = QString::number(len);

    if (len > 56){
        QMessageBox::warning(this,"Display Name Character Limit","Currently: '"+s+"' Characters \nRemove Characters from Display Name (Auto Filled Name)");
    }
    else {
        if (database.open()){
            QSqlRecord record = tabelModel->record();
            /* since the id field has the autoincrement attribute,
            * it is not necessary to indicate its value,
            * that is because this field of the request is removed.
            */
            record.remove(record.indexOf("id"));
            record.setValue("display_name", displayname);
            record.setValue("name", name);
            record.setValue("address", address);
            record.setValue("job_number", jobnumber);
            /*-1 is set to indicate that it will be added to the last row*/
            if(tabelModel->insertRecord(-1, record)){
                tabelModel->submitAll();
                tabelModel->setTable("Construction_Clients");
                tabelModel->select();
                ui->tableView->setModel(tabelModel);
                ui->tableView->hideColumn(0);
                ui->lineEdit_8->setText("");
                ui->lineEdit_6->setText("");
                ui->lineEdit_9->setText("");
                ui->lineEdit_7->setText("");
            }
            else{
                database.rollback();
            }
        } else {
            QMessageBox::warning(this,"Connection Lost","Please Re-Connect.");
        }
    }
}


void PierpontMain::on_pushButton_4_clicked()
{
    // DELETE CONSTRUCTION ROW
    QString id;
    bool flag;
    id = ui->lineEdit_13->text();
    int id2 = id.toInt(&flag);
    if (flag){
        if (database.open()){
            tabelModel->removeRow(id2-1);
            if(tabelModel->submitAll() ) {
                tabelModel->database().commit();
            } else {
                tabelModel->database().rollback();
            }
            tabelModel->setTable("Construction_Clients");
            tabelModel->select();
            ui->tableView->setModel(tabelModel);
            ui->tableView->hideColumn(0);
            ui->lineEdit_13->setText("");
        }
    } else {
        QMessageBox::warning(this,"Number Invalid","Please enter whole number with NO letters or symbols.");
    }
}


void PierpontMain::on_pushButton_7_clicked()
{
    // MECHANIC ADD ROW
    QString name;

    name = ui->lineEdit_12->text();

    //database.transaction();

    if (database.open()){
        QSqlRecord record = tabelModel->record();
        /* since the id field has the autoincrement attribute,
        * it is not necessary to indicate its value,
        * that is because this field of the request is removed.
        */
        record.remove(record.indexOf("id"));
        record.setValue("name", name);

        /*-1 is set to indicate that it will be added to the last row*/
        if(tabelModel->insertRecord(-1, record)){
            tabelModel->submitAll();
            tabelModel->setTable("Mechanic_Personnel");
            tabelModel->select();
            ui->tableView->setModel(tabelModel);
            ui->tableView->hideColumn(0);
            ui->lineEdit_12->setText("");
        }
        else{
          database.rollback();
        }
    } else {
        QMessageBox::warning(this,"Connection Lost","Please Re-Connect.");
    }

}

void PierpontMain::on_pushButton_6_clicked()
{
    // DELETE MECHANIC ROW
    QString id;
    bool flag;
    id = ui->lineEdit_11->text();
    int id2 = id.toInt(&flag);
    if (flag){
        if (database.open()){
            tabelModel->removeRow(id2-1);
            if(tabelModel->submitAll() ) {
                tabelModel->database().commit();
            } else {
                tabelModel->database().rollback();
            }
            tabelModel->setTable("Mechanic_Personnel");
            tabelModel->select();
            ui->tableView->setModel(tabelModel);
            ui->tableView->hideColumn(0);
            ui->lineEdit_11->setText("");
        }
    } else {
        QMessageBox::warning(this,"Number Invalid","Please enter whole number with NO letters or symbols.");
    }

}

