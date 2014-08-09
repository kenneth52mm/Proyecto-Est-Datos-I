#ifndef VERPARTIDOS_H
#define VERPARTIDOS_H

#include <QMainWindow>

namespace Ui {
class VerPartidos;
}

class VerPartidos : public QMainWindow
{
    Q_OBJECT

public:
    explicit VerPartidos(QWidget *parent = 0);
    ~VerPartidos();

private:
    Ui::VerPartidos *ui;
};

#endif // VERPARTIDOS_H
