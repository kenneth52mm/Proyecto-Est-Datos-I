/********************************************************************************
** Form generated from reading UI file 'verpartidos.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERPARTIDOS_H
#define UI_VERPARTIDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerPartidos
{
public:
    QWidget *centralwidget;
    QTableWidget *tbEquipoA;
    QTableWidget *tbEquipoB;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VerPartidos)
    {
        if (VerPartidos->objectName().isEmpty())
            VerPartidos->setObjectName(QStringLiteral("VerPartidos"));
        VerPartidos->resize(800, 600);
        centralwidget = new QWidget(VerPartidos);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tbEquipoA = new QTableWidget(centralwidget);
        if (tbEquipoA->columnCount() < 3)
            tbEquipoA->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbEquipoA->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbEquipoA->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbEquipoA->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tbEquipoA->setObjectName(QStringLiteral("tbEquipoA"));
        tbEquipoA->setGeometry(QRect(35, 200, 291, 192));
        tbEquipoB = new QTableWidget(centralwidget);
        if (tbEquipoB->columnCount() < 3)
            tbEquipoB->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tbEquipoB->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tbEquipoB->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tbEquipoB->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tbEquipoB->setObjectName(QStringLiteral("tbEquipoB"));
        tbEquipoB->setGeometry(QRect(360, 200, 321, 192));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 400, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 400, 75, 23));
        VerPartidos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VerPartidos);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        VerPartidos->setMenuBar(menubar);
        statusbar = new QStatusBar(VerPartidos);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VerPartidos->setStatusBar(statusbar);

        retranslateUi(VerPartidos);

        QMetaObject::connectSlotsByName(VerPartidos);
    } // setupUi

    void retranslateUi(QMainWindow *VerPartidos)
    {
        VerPartidos->setWindowTitle(QApplication::translate("VerPartidos", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = tbEquipoA->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("VerPartidos", "N\303\272mero", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tbEquipoA->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("VerPartidos", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tbEquipoA->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("VerPartidos", "Posici\303\263n", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tbEquipoB->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("VerPartidos", "N\303\272mero", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tbEquipoB->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("VerPartidos", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tbEquipoB->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("VerPartidos", "Posici\303\263n", 0));
        pushButton->setText(QApplication::translate("VerPartidos", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("VerPartidos", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class VerPartidos: public Ui_VerPartidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERPARTIDOS_H
