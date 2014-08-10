/********************************************************************************
** Form generated from reading UI file 'verequipo.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEREQUIPO_H
#define UI_VEREQUIPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerEquipo
{
public:
    QWidget *centralwidget;
    QTableWidget *tbEquipos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VerEquipo)
    {
        if (VerEquipo->objectName().isEmpty())
            VerEquipo->setObjectName(QStringLiteral("VerEquipo"));
        VerEquipo->resize(800, 600);
        centralwidget = new QWidget(VerEquipo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tbEquipos = new QTableWidget(centralwidget);
        if (tbEquipos->columnCount() < 2)
            tbEquipos->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbEquipos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbEquipos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tbEquipos->setObjectName(QStringLiteral("tbEquipos"));
        tbEquipos->setGeometry(QRect(70, 40, 211, 411));
        VerEquipo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VerEquipo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        VerEquipo->setMenuBar(menubar);
        statusbar = new QStatusBar(VerEquipo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VerEquipo->setStatusBar(statusbar);

        retranslateUi(VerEquipo);

        QMetaObject::connectSlotsByName(VerEquipo);
    } // setupUi

    void retranslateUi(QMainWindow *VerEquipo)
    {
        VerEquipo->setWindowTitle(QApplication::translate("VerEquipo", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = tbEquipos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("VerEquipo", "Id Equipo", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tbEquipos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("VerEquipo", "Equipo", 0));
    } // retranslateUi

};

namespace Ui {
    class VerEquipo: public Ui_VerEquipo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEREQUIPO_H
