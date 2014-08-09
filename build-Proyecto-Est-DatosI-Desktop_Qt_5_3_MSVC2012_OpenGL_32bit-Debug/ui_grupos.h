/********************************************************************************
** Form generated from reading UI file 'grupos.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRUPOS_H
#define UI_GRUPOS_H

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

class Ui_Grupos
{
public:
    QWidget *centralwidget;
    QTableWidget *tbGrupoA;
    QPushButton *btnVerGrupoB;
    QPushButton *btnVerGrupoA;
    QTableWidget *tbGrupoB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Grupos)
    {
        if (Grupos->objectName().isEmpty())
            Grupos->setObjectName(QStringLiteral("Grupos"));
        Grupos->resize(800, 600);
        centralwidget = new QWidget(Grupos);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tbGrupoA = new QTableWidget(centralwidget);
        if (tbGrupoA->columnCount() < 2)
            tbGrupoA->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbGrupoA->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbGrupoA->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tbGrupoA->rowCount() < 8)
            tbGrupoA->setRowCount(8);
        tbGrupoA->setObjectName(QStringLiteral("tbGrupoA"));
        tbGrupoA->setGeometry(QRect(70, 21, 221, 271));
        tbGrupoA->setRowCount(8);
        tbGrupoA->setColumnCount(2);
        btnVerGrupoB = new QPushButton(centralwidget);
        btnVerGrupoB->setObjectName(QStringLiteral("btnVerGrupoB"));
        btnVerGrupoB->setGeometry(QRect(390, 330, 75, 23));
        btnVerGrupoA = new QPushButton(centralwidget);
        btnVerGrupoA->setObjectName(QStringLiteral("btnVerGrupoA"));
        btnVerGrupoA->setGeometry(QRect(70, 330, 75, 23));
        tbGrupoB = new QTableWidget(centralwidget);
        if (tbGrupoB->columnCount() < 2)
            tbGrupoB->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbGrupoB->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tbGrupoB->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        if (tbGrupoB->rowCount() < 8)
            tbGrupoB->setRowCount(8);
        tbGrupoB->setObjectName(QStringLiteral("tbGrupoB"));
        tbGrupoB->setGeometry(QRect(390, 20, 221, 271));
        tbGrupoB->setRowCount(8);
        Grupos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Grupos);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Grupos->setMenuBar(menubar);
        statusbar = new QStatusBar(Grupos);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Grupos->setStatusBar(statusbar);

        retranslateUi(Grupos);

        QMetaObject::connectSlotsByName(Grupos);
    } // setupUi

    void retranslateUi(QMainWindow *Grupos)
    {
        Grupos->setWindowTitle(QApplication::translate("Grupos", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = tbGrupoA->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Grupos", "Id Equipo", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tbGrupoA->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Grupos", "Equipo", 0));
        btnVerGrupoB->setText(QApplication::translate("Grupos", "Ver equipo", 0));
        btnVerGrupoA->setText(QApplication::translate("Grupos", "Ver equipo", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tbGrupoB->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Grupos", "Id Equipo", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tbGrupoB->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Grupos", "Equipo", 0));
    } // retranslateUi

};

namespace Ui {
    class Grupos: public Ui_Grupos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRUPOS_H
