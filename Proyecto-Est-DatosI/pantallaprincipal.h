#ifndef PANTALLAPRINCIPAL_H
#define PANTALLAPRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class PantallaPrincipal;
}

class PantallaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit PantallaPrincipal(QWidget *parent = 0);
    ~PantallaPrincipal();

private slots:
    void on_actionGrupo_A_hovered();

    void on_btnGrupos_clicked();

private:
    Ui::PantallaPrincipal *ui;
};

#endif // PANTALLAPRINCIPAL_H
