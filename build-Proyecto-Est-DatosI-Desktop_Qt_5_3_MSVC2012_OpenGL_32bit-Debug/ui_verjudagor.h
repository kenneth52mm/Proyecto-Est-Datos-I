/********************************************************************************
** Form generated from reading UI file 'verjudagor.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERJUDAGOR_H
#define UI_VERJUDAGOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerJudagor
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget_2;
    QFrame *line;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VerJudagor)
    {
        if (VerJudagor->objectName().isEmpty())
            VerJudagor->setObjectName(QStringLiteral("VerJudagor"));
        VerJudagor->resize(869, 562);
        centralwidget = new QWidget(VerJudagor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 171, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 330, 171, 31));
        label_2->setFont(font);
        tableWidget_2 = new QTableWidget(centralwidget);
        if (tableWidget_2->columnCount() < 10)
            tableWidget_2->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 430, 801, 71));
        tableWidget_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-3, 320, 851, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tableWidget_3 = new QTableWidget(centralwidget);
        if (tableWidget_3->columnCount() < 10)
            tableWidget_3->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(8, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(9, __qtablewidgetitem19);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(10, 70, 801, 231));
        tableWidget_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 370, 75, 31));
        VerJudagor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VerJudagor);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 869, 21));
        VerJudagor->setMenuBar(menubar);
        statusbar = new QStatusBar(VerJudagor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VerJudagor->setStatusBar(statusbar);

        retranslateUi(VerJudagor);

        QMetaObject::connectSlotsByName(VerJudagor);
    } // setupUi

    void retranslateUi(QMainWindow *VerJudagor)
    {
        VerJudagor->setWindowTitle(QApplication::translate("VerJudagor", "MainWindow", 0));
        label->setText(QApplication::translate("VerJudagor", "Lista de Jugadores.", 0));
        label_2->setText(QApplication::translate("VerJudagor", "Detalle de Jugador.", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("VerJudagor", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("VerJudagor", "Edad", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("VerJudagor", "Fecha de Nacimiento", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("VerJudagor", "Altura", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("VerJudagor", "Numero de Camiseta", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("VerJudagor", "Posicion", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("VerJudagor", "Primer Partido", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("VerJudagor", "Partidos Jugados", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("VerJudagor", "Cantidad de Goles", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("VerJudagor", "Club Actual", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("VerJudagor", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("VerJudagor", "Edad", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("VerJudagor", "Fecha de Nacimiento", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("VerJudagor", "Altura", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("VerJudagor", "Numero de Camiseta", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("VerJudagor", "Posicion", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("VerJudagor", "Primer Partido", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_3->horizontalHeaderItem(7);
        ___qtablewidgetitem17->setText(QApplication::translate("VerJudagor", "Partidos Jugados", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_3->horizontalHeaderItem(8);
        ___qtablewidgetitem18->setText(QApplication::translate("VerJudagor", "Cantidad de Goles", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_3->horizontalHeaderItem(9);
        ___qtablewidgetitem19->setText(QApplication::translate("VerJudagor", "Club Actual", 0));
        pushButton->setText(QApplication::translate("VerJudagor", "Ver", 0));
    } // retranslateUi

};

namespace Ui {
    class VerJudagor: public Ui_VerJudagor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERJUDAGOR_H
