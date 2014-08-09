#ifndef VERJUGADOR_H
#define VERJUGADOR_H

#include <QMainWindow>

namespace Ui {
class VerJugador;
}

class VerJugador : public QMainWindow
{
    Q_OBJECT

public:
    explicit VerJugador(QWidget *parent = 0);
    ~VerJugador();

private:
    Ui::VerJugador *ui;
};

#endif // VERJUGADOR_H
