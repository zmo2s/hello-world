#include "FenCalculatrice.h"
#include "ui_FenCalculatrice.h"

FenCalculatrice::FenCalculatrice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenCalculatrice)
{
    ui->setupUi(this);
    connect(ui->boutonEgal, SIGNAL(clicked()), this, SLOT(operation()));
}

FenCalculatrice::~FenCalculatrice()
{
    delete ui;
}


void FenCalculatrice::operation()
{


        addition();

}

void FenCalculatrice::addition()
{
    int somme = ui->nombre1->value() + ui->nombre2->value();
    ui->resultat->setNum(somme);
}
