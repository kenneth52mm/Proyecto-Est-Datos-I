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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerJudagor
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VerJudagor)
    {
        if (VerJudagor->objectName().isEmpty())
            VerJudagor->setObjectName(QStringLiteral("VerJudagor"));
        VerJudagor->resize(800, 600);
        menubar = new QMenuBar(VerJudagor);
        menubar->setObjectName(QStringLiteral("menubar"));
        VerJudagor->setMenuBar(menubar);
        centralwidget = new QWidget(VerJudagor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        VerJudagor->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(VerJudagor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VerJudagor->setStatusBar(statusbar);

        retranslateUi(VerJudagor);

        QMetaObject::connectSlotsByName(VerJudagor);
    } // setupUi

    void retranslateUi(QMainWindow *VerJudagor)
    {
        VerJudagor->setWindowTitle(QApplication::translate("VerJudagor", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class VerJudagor: public Ui_VerJudagor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERJUDAGOR_H
