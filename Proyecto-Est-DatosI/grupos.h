#ifndef GRUPOS_H
#define GRUPOS_H

#include <QMainWindow>

namespace Ui {
class Grupos;
}

class Grupos : public QMainWindow
{
    Q_OBJECT

public:
    explicit Grupos(QWidget *parent = 0);
    ~Grupos();

private slots:
    void on_btnVerGrupoA_clicked();

private:
    Ui::Grupos *ui;
};

#endif // GRUPOS_H