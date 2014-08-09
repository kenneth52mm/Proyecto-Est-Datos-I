#ifndef VEREQUIPO_H
#define VEREQUIPO_H

#include <QMainWindow>
#include "ListaEquipos.h"
namespace Ui {
class VerEquipo;
}

class VerEquipo : public QMainWindow
{
    Q_OBJECT

public:
    explicit VerEquipo(ListaEquipos *equipos, QWidget *parent = 0);

    ~VerEquipo();
private:
    Ui::VerEquipo *ui;
};

#endif // VEREQUIPO_H
