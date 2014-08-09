/********************************************************************************
** Form generated from reading UI file 'pantallaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANTALLAPRINCIPAL_H
#define UI_PANTALLAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PantallaPrincipal
{
public:
    QAction *actionGrupo_A;
    QAction *actionGrupo_B;
    QAction *actionAlemania;
    QAction *actionArgentina;
    QAction *actionAustralia;
    QAction *actionCosta_de_Marfil;
    QAction *actionCosta_Rica;
    QAction *actionEspa_a;
    QAction *actionHolanda;
    QAction *actionJap_n;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuGrupos;
    QMenu *menuEquipos;
    QMenu *menuJugadores;
    QMenu *menuPartidos;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PantallaPrincipal)
    {
        if (PantallaPrincipal->objectName().isEmpty())
            PantallaPrincipal->setObjectName(QStringLiteral("PantallaPrincipal"));
        PantallaPrincipal->resize(713, 455);
        PantallaPrincipal->setContextMenuPolicy(Qt::ActionsContextMenu);
        actionGrupo_A = new QAction(PantallaPrincipal);
        actionGrupo_A->setObjectName(QStringLiteral("actionGrupo_A"));
        QFont font;
        font.setPointSize(8);
        actionGrupo_A->setFont(font);
        actionGrupo_A->setShortcutContext(Qt::ApplicationShortcut);
        actionGrupo_A->setMenuRole(QAction::ApplicationSpecificRole);
        actionGrupo_B = new QAction(PantallaPrincipal);
        actionGrupo_B->setObjectName(QStringLiteral("actionGrupo_B"));
        actionAlemania = new QAction(PantallaPrincipal);
        actionAlemania->setObjectName(QStringLiteral("actionAlemania"));
        actionArgentina = new QAction(PantallaPrincipal);
        actionArgentina->setObjectName(QStringLiteral("actionArgentina"));
        actionAustralia = new QAction(PantallaPrincipal);
        actionAustralia->setObjectName(QStringLiteral("actionAustralia"));
        actionCosta_de_Marfil = new QAction(PantallaPrincipal);
        actionCosta_de_Marfil->setObjectName(QStringLiteral("actionCosta_de_Marfil"));
        actionCosta_Rica = new QAction(PantallaPrincipal);
        actionCosta_Rica->setObjectName(QStringLiteral("actionCosta_Rica"));
        actionEspa_a = new QAction(PantallaPrincipal);
        actionEspa_a->setObjectName(QStringLiteral("actionEspa_a"));
        actionHolanda = new QAction(PantallaPrincipal);
        actionHolanda->setObjectName(QStringLiteral("actionHolanda"));
        actionJap_n = new QAction(PantallaPrincipal);
        actionJap_n->setObjectName(QStringLiteral("actionJap_n"));
        centralWidget = new QWidget(PantallaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PantallaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PantallaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 713, 21));
        menuGrupos = new QMenu(menuBar);
        menuGrupos->setObjectName(QStringLiteral("menuGrupos"));
        menuEquipos = new QMenu(menuBar);
        menuEquipos->setObjectName(QStringLiteral("menuEquipos"));
        menuJugadores = new QMenu(menuBar);
        menuJugadores->setObjectName(QStringLiteral("menuJugadores"));
        menuPartidos = new QMenu(menuBar);
        menuPartidos->setObjectName(QStringLiteral("menuPartidos"));
        PantallaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PantallaPrincipal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PantallaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PantallaPrincipal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PantallaPrincipal->setStatusBar(statusBar);

        menuBar->addAction(menuGrupos->menuAction());
        menuBar->addAction(menuEquipos->menuAction());
        menuBar->addAction(menuJugadores->menuAction());
        menuBar->addAction(menuPartidos->menuAction());
        menuGrupos->addAction(actionGrupo_A);
        menuGrupos->addAction(actionGrupo_B);
        menuEquipos->addAction(actionAlemania);
        menuEquipos->addAction(actionArgentina);
        menuEquipos->addAction(actionAustralia);
        menuEquipos->addAction(actionCosta_de_Marfil);
        menuEquipos->addAction(actionCosta_Rica);
        menuEquipos->addAction(actionEspa_a);
        menuEquipos->addAction(actionHolanda);
        menuEquipos->addAction(actionJap_n);

        retranslateUi(PantallaPrincipal);

        QMetaObject::connectSlotsByName(PantallaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *PantallaPrincipal)
    {
        PantallaPrincipal->setWindowTitle(QApplication::translate("PantallaPrincipal", "PantallaPrincipal", 0));
        actionGrupo_A->setText(QApplication::translate("PantallaPrincipal", "Grupo A", 0));
        actionGrupo_B->setText(QApplication::translate("PantallaPrincipal", "Grupo B", 0));
        actionAlemania->setText(QApplication::translate("PantallaPrincipal", "Alemania", 0));
        actionArgentina->setText(QApplication::translate("PantallaPrincipal", "Argentina", 0));
        actionAustralia->setText(QApplication::translate("PantallaPrincipal", "Australia", 0));
        actionCosta_de_Marfil->setText(QApplication::translate("PantallaPrincipal", "Costa de Marfil", 0));
        actionCosta_Rica->setText(QApplication::translate("PantallaPrincipal", "Costa Rica", 0));
        actionEspa_a->setText(QApplication::translate("PantallaPrincipal", "Espa\303\261a", 0));
        actionHolanda->setText(QApplication::translate("PantallaPrincipal", "Holanda", 0));
        actionJap_n->setText(QApplication::translate("PantallaPrincipal", "Jap\303\263n", 0));
        menuGrupos->setTitle(QApplication::translate("PantallaPrincipal", "Grupos", 0));
        menuEquipos->setTitle(QApplication::translate("PantallaPrincipal", "Equipos", 0));
        menuJugadores->setTitle(QApplication::translate("PantallaPrincipal", "Jugadores", 0));
        menuPartidos->setTitle(QApplication::translate("PantallaPrincipal", "Partidos", 0));
    } // retranslateUi

};

namespace Ui {
    class PantallaPrincipal: public Ui_PantallaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTALLAPRINCIPAL_H
