#include "verjudagor.h"
#include "ui_verjudagor.h"

VerJudagor::VerJudagor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerJudagor)
{
    ui->setupUi(this);
}

VerJudagor::~VerJudagor()
{
    delete ui;
}
