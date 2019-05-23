#include "fencalculatrice.h"
#include "ui_fencalculatrice.h"

fencalculatrice::fencalculatrice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fencalculatrice)
{
    ui->setupUi(this);
}

fencalculatrice::~fencalculatrice()
{
    delete ui;
}
