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

private:
    Ui::PantallaPrincipal *ui;
};

#endif // PANTALLAPRINCIPAL_H
