#include "Moto.h"

using namespace std;

Moto::Moto(int prix,double vitesseMax) : Vehicule(prix),m_vitesse(vitesseMax)
{
}

void Moto::affiche() const

{

  cout << "Ceci est une moto allant a " << m_vitesse << " km/h et contant  " << m_prix << " euros." << endl;

}

Moto::~Moto()
{

}
