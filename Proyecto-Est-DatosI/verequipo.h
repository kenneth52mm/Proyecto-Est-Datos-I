#ifndef VEREQUIPO_H
#define VEREQUIPO_H

#include <QMainWindow>

namespace Ui {
class VerEquipo;
}

class VerEquipo : public QMainWindow
{
    Q_OBJECT

public:
    explicit VerEquipo(QWidget *parent = 0);
    ~VerEquipo();

private:
    Ui::VerEquipo *ui;
};

#endif // VEREQUIPO_H
