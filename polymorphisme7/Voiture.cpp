
#include "Voiture.h"

using namespace std;



Voiture::Voiture(int prix,int date,int portes) :Vehicule(prix,date),m_portes(portes)
{

}


void Voiture::affiche() const

{

  cout << "Ceci est une voiture avec " << m_portes << " portes et coutant " << m_prix << " euros." << endl;

}

Voiture::~Voiture()
{

}
