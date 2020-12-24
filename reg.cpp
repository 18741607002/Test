#include "reg.h"
#include "ui_reg.h"

Reg::Reg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reg)
{
    ui->setupUi(this);
}

Reg::~Reg()
{
  
}
