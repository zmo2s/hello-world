
#include "Voiture.h"

using namespace std;

/*Voiture::Voiture():
{

}*/

Voiture::Voiture(int prix,int portes) :Vehicule(prix),m_portes(portes)
{

}


void Voiture::affiche() const

{

  cout << "Ceci est une voiture avec " << m_portes << " portes et coutant " << m_prix << " euros." << endl;

}

Voiture::~Voiture()
{

}
