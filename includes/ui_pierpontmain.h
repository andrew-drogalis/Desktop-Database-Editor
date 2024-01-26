/********************************************************************************
** Form generated from reading UI file 'pierpontmain.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIERPONTMAIN_H
#define UI_PIERPONTMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PierpontMain
{
public:
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionSign_Out;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *top_background;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_4;
    QLabel *black_label_2;
    QLabel *black_label_4;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *black_label_3;
    QLabel *label_14;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_14;
    QLabel *label_29;
    QWidget *page_3;
    QLabel *label_25;
    QLabel *label_27;
    QLabel *black_label_9;
    QLabel *label_30;
    QLabel *label_22;
    QLineEdit *lineEdit_12;
    QPushButton *pushButton_7;
    QLabel *black_label_8;
    QPushButton *pushButton_6;
    QLabel *black_label_10;
    QLineEdit *lineEdit_11;
    QLabel *label_23;
    QWidget *page_2;
    QLineEdit *lineEdit_9;
    QLabel *label_13;
    QPushButton *pushButton_5;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *black_label_6;
    QLineEdit *lineEdit_8;
    QLabel *black_label_5;
    QLabel *label_17;
    QLabel *label_21;
    QLabel *label_20;
    QLabel *label_15;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_6;
    QLabel *black_label_7;
    QLabel *label_16;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_13;
    QLabel *label_24;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *address;
    QLabel *label_3;
    QLabel *black_label;
    QTableView *tableView;
    QPushButton *pushButtonConnect;
    QLineEdit *lineEdit;
    QLabel *label_26;
    QLabel *label_28;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSign_Out;

    void setupUi(QMainWindow *PierpontMain)
    {
        if (PierpontMain->objectName().isEmpty())
            PierpontMain->setObjectName("PierpontMain");
        PierpontMain->resize(1900, 1000);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PierpontMain->sizePolicy().hasHeightForWidth());
        PierpontMain->setSizePolicy(sizePolicy);
        PierpontMain->setMinimumSize(QSize(1900, 1000));
        PierpontMain->setMaximumSize(QSize(1900, 1000));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/PierpontIcon.png"), QSize(), QIcon::Normal, QIcon::On);
        PierpontMain->setWindowIcon(icon);
        actionPrint = new QAction(PierpontMain);
        actionPrint->setObjectName("actionPrint");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons8-print-100.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPrint->setIcon(icon1);
        actionExit = new QAction(PierpontMain);
        actionExit->setObjectName("actionExit");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons8-x-100.png"), QSize(), QIcon::Normal, QIcon::On);
        actionExit->setIcon(icon2);
        actionSign_Out = new QAction(PierpontMain);
        actionSign_Out->setObjectName("actionSign_Out");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icons8-sign-out-96.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSign_Out->setIcon(icon3);
        centralwidget = new QWidget(PierpontMain);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(25, 13, 211, 75));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/pierpontlogo_darkRed.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        top_background = new QLabel(centralwidget);
        top_background->setObjectName("top_background");
        top_background->setGeometry(QRect(0, 0, 1901, 140));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(top_background->sizePolicy().hasHeightForWidth());
        top_background->setSizePolicy(sizePolicy2);
        top_background->setMinimumSize(QSize(1900, 100));
        top_background->setStyleSheet(QString::fromUtf8("#top_background {\n"
"	background-color: rgb(112,14,12);\n"
"	width: 100%;\n"
"	height: 300 px;\n"
"}"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(1410, 200, 481, 541));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy3);
        stackedWidget->setMinimumSize(QSize(320, 0));
        QFont font;
        font.setKerning(true);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8("#stackedWidget {\n"
"	background-color: rgb(241, 243, 244);\n"
"}"));
        page = new QWidget();
        page->setObjectName("page");
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 40, 161, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Alegreya Sans SC")});
        font1.setPointSize(14);
        font1.setBold(true);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("#label_4 {\n"
"	color: white;\n"
"}"));
        black_label_2 = new QLabel(page);
        black_label_2->setObjectName("black_label_2");
        black_label_2->setGeometry(QRect(5, 40, 461, 20));
        sizePolicy2.setHeightForWidth(black_label_2->sizePolicy().hasHeightForWidth());
        black_label_2->setSizePolicy(sizePolicy2);
        black_label_2->setMinimumSize(QSize(300, 10));
        black_label_2->setStyleSheet(QString::fromUtf8("#black_label_2{\n"
"	background-color: black;\n"
"	width: 100%;\n"
"	height: 300 px;\n"
"}"));
        black_label_4 = new QLabel(page);
        black_label_4->setObjectName("black_label_4");
        black_label_4->setGeometry(QRect(5, 380, 461, 20));
        sizePolicy2.setHeightForWidth(black_label_4->sizePolicy().hasHeightForWidth());
        black_label_4->setSizePolicy(sizePolicy2);
        black_label_4->setMinimumSize(QSize(300, 10));
        black_label_4->setStyleSheet(QString::fromUtf8("#black_label_4{\n"
"	background-color: black;\n"
"	width: 100%;\n"
"	height: 300 px;\n"
"}"));
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 380, 271, 21));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("#label_8 {\n"
"	color: white;\n"
"}"));
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 90, 451, 25));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Roboto")});
        font2.setPointSize(11);
        lineEdit_2->setFont(font2);
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(130, 330, 211, 25));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Serif Gothic")});
        font3.setPointSize(11);
        pushButton_3->setFont(font3);
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 470, 211, 25));
        pushButton_2->setFont(font3);
        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(10, 140, 451, 25));
        lineEdit_3->setFont(font2);
        lineEdit_4 = new QLineEdit(page);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(10, 190, 451, 25));
        lineEdit_4->setFont(font2);
        lineEdit_5 = new QLineEdit(page);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(10, 240, 451, 25));
        lineEdit_5->setFont(font2);
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 70, 291, 16));
        label_5->setFont(font3);
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 120, 271, 20));
        label_6->setFont(font3);
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 170, 151, 20));
        label_7->setFont(font3);
        label_9 = new QLabel(page);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 220, 151, 20));
        label_9->setFont(font3);
        label_10 = new QLabel(page);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(310, 70, 161, 16));
        label_10->setFont(font3);
        label_11 = new QLabel(page);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(160, 220, 311, 20));
        label_11->setFont(font3);
        label_12 = new QLabel(page);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 10, 281, 21));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("#label_12 {\n"
"	color: white;\n"
"}"));
        black_label_3 = new QLabel(page);
        black_label_3->setObjectName("black_label_3");
        black_label_3->setGeometry(QRect(5, 10, 461, 20));
        sizePolicy2.setHeightForWidth(black_label_3->sizePolicy().hasHeightForWidth());
        black_label_3->setSizePolicy(sizePolicy2);
        black_label_3->setMinimumSize(QSize(300, 10));
        black_label_3->setStyleSheet(QString::fromUtf8("#black_label_3{\n"
"	background-color: rgb(172,44,38);\n"
"}"));
        label_14 = new QLabel(page);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 410, 151, 20));
        label_14->setFont(font3);
        lineEdit_10 = new QLineEdit(page);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(10, 430, 451, 25));
        lineEdit_10->setFont(font2);
        lineEdit_14 = new QLineEdit(page);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(10, 290, 451, 25));
        lineEdit_14->setFont(font2);
        label_29 = new QLabel(page);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(10, 270, 151, 20));
        label_29->setFont(font3);
        stackedWidget->addWidget(page);
        black_label_3->raise();
        black_label_2->raise();
        label_4->raise();
        black_label_4->raise();
        label_8->raise();
        lineEdit_2->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_14->raise();
        lineEdit_10->raise();
        lineEdit_14->raise();
        label_29->raise();
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_25 = new QLabel(page_3);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(10, 70, 151, 16));
        label_25->setFont(font3);
        label_27 = new QLabel(page_3);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(10, 10, 321, 21));
        label_27->setFont(font1);
        label_27->setStyleSheet(QString::fromUtf8("#label_27 {\n"
"	color: white;\n"
"}"));
        black_label_9 = new QLabel(page_3);
        black_label_9->setObjectName("black_label_9");
        black_label_9->setGeometry(QRect(5, 10, 461, 20));
        sizePolicy2.setHeightForWidth(black_label_9->sizePolicy().hasHeightForWidth());
        black_label_9->setSizePolicy(sizePolicy2);
        black_label_9->setMinimumSize(QSize(300, 10));
        black_label_9->setStyleSheet(QString::fromUtf8("#black_label_9{\n"
"	background-color: rgb(172,44,38);\n"
"}"));
        label_30 = new QLabel(page_3);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(10, 40, 161, 21));
        label_30->setFont(font1);
        label_30->setStyleSheet(QString::fromUtf8("#label_30 {\n"
"	color: white;\n"
"}"));
        label_22 = new QLabel(page_3);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(10, 190, 271, 21));
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("#label_22 {\n"
"	color: white;\n"
"}"));
        lineEdit_12 = new QLineEdit(page_3);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(10, 90, 451, 25));
        lineEdit_12->setFont(font2);
        pushButton_7 = new QPushButton(page_3);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(130, 140, 211, 25));
        pushButton_7->setFont(font3);
        black_label_8 = new QLabel(page_3);
        black_label_8->setObjectName("black_label_8");
        black_label_8->setGeometry(QRect(5, 40, 461, 20));
        sizePolicy2.setHeightForWidth(black_label_8->sizePolicy().hasHeightForWidth());
        black_label_8->setSizePolicy(sizePolicy2);
        black_label_8->setMinimumSize(QSize(300, 10));
        black_label_8->setStyleSheet(QString::fromUtf8("#black_label_8{\n"
"	background-color: black;\n"
"	width: 100%;\n"
"	height: 300 px;\n"
"}"));
        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(130, 280, 211, 25));
        pushButton_6->setFont(font3);
        black_label_10 = new QLabel(page_3);
        black_label_10->setObjectName("black_label_10");
        black_label_10->setGeometry(QRect(5, 190, 461, 20));
        sizePolicy2.setHeightForWidth(black_label_10->sizePolicy().hasHeightForWidth());
        black_label_10->setSizePolicy(sizePolicy2);
        black_label_10->setMinimumSize(QSize(300, 10));
        black_label_10->setStyleSheet(QString::fromUtf8("#black_label_10{\n"
"	background-color: black;\n"
"	width: 100%;\n"
"	height: 300 px;\n"
"}"));
        lineEdit_11 = new QLineEdit(page_3);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(10, 240, 451, 25));
        lineEdit_11->setFont(font2);
        label_23 = new QLabel(page_3);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(10, 220, 151, 20));
        label_23->setFont(font3);
        stackedWidget->addWidget(page_3);
        black_label_9->raise();
        black_label_8->raise();
        black_label_10->raise();
        label_25->raise();
        label_27->raise();
        label_30->raise();
        label_22->raise();
        lineEdit_12->raise();
        pushButton_7->raise();
        pushButton_6->raise();
        lineEdit_11->raise();
        label_23->raise();
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        lineEdit_9 = new QLineEdit(page_2);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(10, 190, 451, 25));
        lineEdit_9->setFont(font2);
        label_13 = new QLabel(page_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 340, 271, 21));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("#label_13 {\n"
"	color: white;\n"
"}"));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(130, 290, 211, 25));
        pushButton_5->setFont(font3);
        label_18 = new QLabel(page_2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 10, 281, 21));
        label_18->setFont(font1);
        label_18->setStyleSheet(QString::fromUtf8("#label_18 {\n"
"	color: white;\n"
"}"));
        label_19 = new QLabel(page_2);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(10, 120, 281, 20));
        label_19->setFont(font3);
        black_label_6 = new QLabel(page_2);
        black_label_6->setObjectName("black_label_6");
        black_label_6->setGeometry(QRect(5, 10, 461, 20));
        sizePolicy2.setHeightForWidth(black_label_6->sizePolicy().hasHeightForWidth());
        black_label_6->setSizePolicy(sizePolicy2);
        black_label_6->setMinimumSize(QSize(300, 10));
        black_label_6->setStyleSheet(QString::fromUtf8("#black_label_6{\n"
"	background-color: rgb(172,44,38);\n"
"}"));
        lineEdit_8 = new QLineEdit(page_2);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(10, 90, 451, 25));
        lineEdit_8->setFont(font2);
        black_label_5 = new QLabel(page_2);
        black_label_5->setObjectName("black_label_5");
        black_label_5->setGeometry(QRect(5, 40, 461, 20));
        sizePolicy2.setHeightForWidth(black_label_5->sizePolicy().hasHeightForWidth());
        black_label_5->setSizePolicy(sizePolicy2);
        black_label_5->setMinimumSize(QSize(300, 10));
        black_label_5->setStyleSheet(QString::fromUtf8("#black_label_5{\n"
"	background-color: black;\n"
"	width: 100%;\n"
"	height: 300 px;\n"
"}"));
        label_17 = new QLabel(page_2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 170, 151, 20));
        label_17->setFont(font3);
        label_21 = new QLabel(page_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(10, 40, 161, 21));
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("#label_21 {\n"
"	color: white;\n"
"}"));
        label_20 = new QLabel(page_2);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(10, 220, 151, 20));
        label_20->setFont(font3);
        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(310, 70, 161, 16));
        label_15->setFont(font3);
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(130, 430, 211, 25));
        pushButton_4->setFont(font3);
        lineEdit_6 = new QLineEdit(page_2);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(10, 140, 451, 25));
        lineEdit_6->setFont(font2);
        black_label_7 = new QLabel(page_2);
        black_label_7->setObjectName("black_label_7");
        black_label_7->setGeometry(QRect(5, 340, 461, 20));
        sizePolicy2.setHeightForWidth(black_label_7->sizePolicy().hasHeightForWidth());
        black_label_7->setSizePolicy(sizePolicy2);
        black_label_7->setMinimumSize(QSize(300, 10));
        black_label_7->setStyleSheet(QString::fromUtf8("#black_label_7{\n"
"	background-color: black;\n"
"	width: 100%;\n"
"	height: 300 px;\n"
"}"));
        label_16 = new QLabel(page_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 70, 281, 16));
        label_16->setFont(font3);
        lineEdit_7 = new QLineEdit(page_2);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(10, 240, 451, 25));
        lineEdit_7->setFont(font2);
        lineEdit_13 = new QLineEdit(page_2);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(10, 390, 451, 25));
        lineEdit_13->setFont(font2);
        label_24 = new QLabel(page_2);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(10, 370, 151, 20));
        label_24->setFont(font3);
        stackedWidget->addWidget(page_2);
        black_label_7->raise();
        black_label_6->raise();
        lineEdit_9->raise();
        label_13->raise();
        pushButton_5->raise();
        label_18->raise();
        label_19->raise();
        lineEdit_8->raise();
        black_label_5->raise();
        label_17->raise();
        label_21->raise();
        label_20->raise();
        label_15->raise();
        pushButton_4->raise();
        lineEdit_6->raise();
        label_16->raise();
        lineEdit_7->raise();
        lineEdit_13->raise();
        label_24->raise();
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(30, 180, 181, 21));
        comboBox->setFont(font3);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 150, 251, 21));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("#label_2 {\n"
"	color: white;\n"
"}"));
        address = new QLabel(centralwidget);
        address->setObjectName("address");
        address->setGeometry(QRect(1700, 0, 180, 100));
        sizePolicy1.setHeightForWidth(address->sizePolicy().hasHeightForWidth());
        address->setSizePolicy(sizePolicy1);
        address->setMinimumSize(QSize(180, 100));
        address->setMaximumSize(QSize(180, 100));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Serif Gothic")});
        address->setFont(font4);
        address->setStyleSheet(QString::fromUtf8("#address {\n"
"	color:white;\n"
"}"));
        address->setTextFormat(Qt::RichText);
        address->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(28, 110, 211, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Alegreya Sans SC")});
        font5.setPointSize(16);
        font5.setBold(true);
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("#label_3 {\n"
"	color: white;\n"
"}"));
        black_label = new QLabel(centralwidget);
        black_label->setObjectName("black_label");
        black_label->setGeometry(QRect(25, 150, 1861, 20));
        sizePolicy2.setHeightForWidth(black_label->sizePolicy().hasHeightForWidth());
        black_label->setSizePolicy(sizePolicy2);
        black_label->setMinimumSize(QSize(1230, 10));
        black_label->setStyleSheet(QString::fromUtf8("#black_label {\n"
"	background-color: black;\n"
"	width: 100%;\n"
"	height: 300 px;\n"
"}"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(25, 210, 1381, 761));
        tableView->setMinimumSize(QSize(680, 0));
        tableView->setFont(font2);
        tableView->horizontalHeader()->setDefaultSectionSize(300);
        tableView->verticalHeader()->setVisible(true);
        pushButtonConnect = new QPushButton(centralwidget);
        pushButtonConnect->setObjectName("pushButtonConnect");
        pushButtonConnect->setGeometry(QRect(230, 180, 121, 21));
        pushButtonConnect->setFont(font3);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(390, 178, 221, 25));
        lineEdit->setFont(font2);
        lineEdit->setEchoMode(QLineEdit::Password);
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(620, 182, 151, 16));
        label_26->setFont(font3);
        label_28 = new QLabel(centralwidget);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(1630, 180, 251, 21));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Alegreya Sans SC")});
        font6.setPointSize(14);
        label_28->setFont(font6);
        label_28->setStyleSheet(QString::fromUtf8("#label_28{\n"
"	color:red;\n"
"}"));
        PierpontMain->setCentralWidget(centralwidget);
        black_label->raise();
        top_background->raise();
        label->raise();
        stackedWidget->raise();
        comboBox->raise();
        label_2->raise();
        address->raise();
        label_3->raise();
        tableView->raise();
        pushButtonConnect->raise();
        lineEdit->raise();
        label_26->raise();
        label_28->raise();
        menubar = new QMenuBar(PierpontMain);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1900, 17));
        menubar->setAutoFillBackground(false);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuSign_Out = new QMenu(menubar);
        menuSign_Out->setObjectName("menuSign_Out");
        PierpontMain->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSign_Out->menuAction());
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuFile->addSeparator();
        menuSign_Out->addAction(actionSign_Out);

        retranslateUi(PierpontMain);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PierpontMain);
    } // setupUi

    void retranslateUi(QMainWindow *PierpontMain)
    {
        PierpontMain->setWindowTitle(QCoreApplication::translate("PierpontMain", "Pierpont Mechanical Database", nullptr));
        actionPrint->setText(QCoreApplication::translate("PierpontMain", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("PierpontMain", "Exit", nullptr));
        actionSign_Out->setText(QCoreApplication::translate("PierpontMain", "Sign Out", nullptr));
        label->setText(QString());
        top_background->setText(QString());
        label_4->setText(QCoreApplication::translate("PierpontMain", "ADD NEW ROW", nullptr));
        black_label_2->setText(QString());
        black_label_4->setText(QString());
        label_8->setText(QCoreApplication::translate("PierpontMain", "DELETE  ROW", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("PierpontMain", "Auto Filled with Name If Blank", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PierpontMain", "Add Row", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PierpontMain", "Delete", nullptr));
        label_5->setText(QCoreApplication::translate("PierpontMain", "Display Name (For Mechanics)", nullptr));
        label_6->setText(QCoreApplication::translate("PierpontMain", "Name (For Client)", nullptr));
        label_7->setText(QCoreApplication::translate("PierpontMain", "Address", nullptr));
        label_9->setText(QCoreApplication::translate("PierpontMain", "Email Address", nullptr));
        label_10->setText(QCoreApplication::translate("PierpontMain", "(Max 56 Characters)", nullptr));
        label_11->setText(QCoreApplication::translate("PierpontMain", "(Use 1 comma between email addresses)", nullptr));
        label_12->setText(QCoreApplication::translate("PierpontMain", "MAINTENANCE DATABASE", nullptr));
        black_label_3->setText(QString());
        label_14->setText(QCoreApplication::translate("PierpontMain", "Row ID", nullptr));
        label_29->setText(QCoreApplication::translate("PierpontMain", "Job Number", nullptr));
        label_25->setText(QCoreApplication::translate("PierpontMain", "Name", nullptr));
        label_27->setText(QCoreApplication::translate("PierpontMain", "MECHANIC DATABASE", nullptr));
        black_label_9->setText(QString());
        label_30->setText(QCoreApplication::translate("PierpontMain", "ADD NEW ROW", nullptr));
        label_22->setText(QCoreApplication::translate("PierpontMain", "DELETE ROW", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PierpontMain", "Add Row", nullptr));
        black_label_8->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("PierpontMain", "Delete", nullptr));
        black_label_10->setText(QString());
        label_23->setText(QCoreApplication::translate("PierpontMain", "Row ID", nullptr));
        label_13->setText(QCoreApplication::translate("PierpontMain", "DELETE ROW", nullptr));
        pushButton_5->setText(QCoreApplication::translate("PierpontMain", "Add Row", nullptr));
        label_18->setText(QCoreApplication::translate("PierpontMain", "CONSTRUCTION DATABASE", nullptr));
        label_19->setText(QCoreApplication::translate("PierpontMain", "Name (For Clients)", nullptr));
        black_label_6->setText(QString());
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("PierpontMain", "Auto Filled with Name If Blank", nullptr));
        black_label_5->setText(QString());
        label_17->setText(QCoreApplication::translate("PierpontMain", "Address", nullptr));
        label_21->setText(QCoreApplication::translate("PierpontMain", "ADD NEW ROW", nullptr));
        label_20->setText(QCoreApplication::translate("PierpontMain", "Job Number", nullptr));
        label_15->setText(QCoreApplication::translate("PierpontMain", "(Max 56 Characters)", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PierpontMain", "Delete", nullptr));
        black_label_7->setText(QString());
        label_16->setText(QCoreApplication::translate("PierpontMain", "Display Name (For Mechanics)", nullptr));
        label_24->setText(QCoreApplication::translate("PierpontMain", "Row ID", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("PierpontMain", "Maintenance Clients", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PierpontMain", "Construction Clients", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("PierpontMain", "Mechanic Personnel", nullptr));

        label_2->setText(QCoreApplication::translate("PierpontMain", "SELECT DATABASE", nullptr));
        address->setText(QCoreApplication::translate("PierpontMain", "<html><head/><body><p>250 Fulton Avenue<br/>Garden City Park, NY 11040<br/>Phone: (516)746-7300<br/>Fax: (516)746-7302</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("PierpontMain", "DATABASE EDITOR", nullptr));
        black_label->setText(QString());
        pushButtonConnect->setText(QCoreApplication::translate("PierpontMain", "Connect", nullptr));
        label_26->setText(QCoreApplication::translate("PierpontMain", "Enter Password", nullptr));
        label_28->setText(QCoreApplication::translate("PierpontMain", "\342\254\244  DATABASE OFFLINE", nullptr));
        menuFile->setTitle(QCoreApplication::translate("PierpontMain", "File", nullptr));
        menuSign_Out->setTitle(QCoreApplication::translate("PierpontMain", "Sign Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PierpontMain: public Ui_PierpontMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIERPONTMAIN_H
