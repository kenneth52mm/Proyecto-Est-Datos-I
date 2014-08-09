#ifndef VERJUDAGOR_H
#define VERJUDAGOR_H

#include <QMainWindow>

namespace Ui {
class VerJudagor;
}

class VerJudagor : public QMainWindow
{
    Q_OBJECT

public:
    explicit VerJudagor(QWidget *parent = 0);
    ~VerJudagor();

private:
    Ui::VerJudagor *ui;
};

#endif // VERJUDAGOR_H
