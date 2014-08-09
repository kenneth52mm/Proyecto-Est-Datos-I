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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerEquipo
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VerEquipo)
    {
        if (VerEquipo->objectName().isEmpty())
            VerEquipo->setObjectName(QStringLiteral("VerEquipo"));
        VerEquipo->resize(800, 600);
        menubar = new QMenuBar(VerEquipo);
        menubar->setObjectName(QStringLiteral("menubar"));
        VerEquipo->setMenuBar(menubar);
        centralwidget = new QWidget(VerEquipo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        VerEquipo->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(VerEquipo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VerEquipo->setStatusBar(statusbar);

        retranslateUi(VerEquipo);

        QMetaObject::connectSlotsByName(VerEquipo);
    } // setupUi

    void retranslateUi(QMainWindow *VerEquipo)
    {
        VerEquipo->setWindowTitle(QApplication::translate("VerEquipo", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class VerEquipo: public Ui_VerEquipo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEREQUIPO_H
