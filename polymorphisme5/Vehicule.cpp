#include "Vehicule.h"

using namespace std;
Vehicule::Vehicule(int prix): m_prix(prix)
{

}

void Vehicule::affiche() const

{

    cout << "Ceci est un vehicule coutant " << m_prix << "euros." <<"l'annee de fabrication est "  << endl;

}
Vehicule::~Vehicule()
{

}
