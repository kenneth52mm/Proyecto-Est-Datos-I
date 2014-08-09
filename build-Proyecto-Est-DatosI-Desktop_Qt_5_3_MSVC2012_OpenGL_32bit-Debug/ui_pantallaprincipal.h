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
#include <QtWidgets/QPushButton>
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
    QPushButton *btnGrupos;
    QPushButton *btnEquipos;
    QPushButton *btnJugadores;
    QPushButton *btnPartidos;

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
        btnGrupos = new QPushButton(centralWidget);
        btnGrupos->setObjectName(QStringLiteral("btnGrupos"));
        btnGrupos->setGeometry(QRect(110, 210, 75, 23));
        btnEquipos = new QPushButton(centralWidget);
        btnEquipos->setObjectName(QStringLiteral("btnEquipos"));
        btnEquipos->setGeometry(QRect(200, 210, 75, 23));
        btnJugadores = new QPushButton(centralWidget);
        btnJugadores->setObjectName(QStringLiteral("btnJugadores"));
        btnJugadores->setGeometry(QRect(290, 210, 75, 23));
        btnPartidos = new QPushButton(centralWidget);
        btnPartidos->setObjectName(QStringLiteral("btnPartidos"));
        btnPartidos->setGeometry(QRect(390, 210, 75, 23));
        PantallaPrincipal->setCentralWidget(centralWidget);

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
        btnGrupos->setText(QApplication::translate("PantallaPrincipal", "Grupos", 0));
        btnEquipos->setText(QApplication::translate("PantallaPrincipal", "Equipos", 0));
        btnJugadores->setText(QApplication::translate("PantallaPrincipal", "Jugadores", 0));
        btnPartidos->setText(QApplication::translate("PantallaPrincipal", "Partidos", 0));
    } // retranslateUi

};

namespace Ui {
    class PantallaPrincipal: public Ui_PantallaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTALLAPRINCIPAL_H
