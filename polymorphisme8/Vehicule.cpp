#include "Vehicule.h"

using namespace std;
Vehicule::Vehicule(int prix,int date): m_prix(prix), m_date(date)
{

}

void Vehicule::affiche() const

{

    cout << "Ceci est un vehicule coutant " << m_prix << "euros." <<"l'annee de fabrication est "  << endl;

}
void Vehicule::afficheDate() const

{

    cout << "La date de fabrication est :  " << m_date  << endl;

}
Vehicule::~Vehicule()
{

}
