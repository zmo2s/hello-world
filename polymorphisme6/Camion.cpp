#include "Camion.h"

using namespace std;

Camion::Camion(int prix,int date,int poidsTransportable) : Vehicule(prix,date),m_poidsTransportable(poidsTransportable)
{
}

void Camion::affiche() const

{

  cout << "Le poids trnasportable par le camion est " << m_poidsTransportable << " kg " << endl;

}

Camion::~Camion()
{

}
