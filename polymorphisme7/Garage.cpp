#include "Garage.h"

using namespace std;

Garage::Garage(int prix,int date):Vehicule(prix,date)
{

}

void Garage::ajouter(Vehicule* vehicule)

{

  m_listeVehicules.push_back(vehicule);

}

void Garage::info()
{
    cout << "Le garage contient :" << endl;

    for(int i(0);i<m_listeVehicules.size();++i)
    {
        m_listeVehicules[i]->affiche();
      cout<<i<<"oooo";
    }
}
void Garage::supprimerVehicule()
{
    int rang;
    cout << "Quel vehicule supprimer ?" << endl;
  //  toutAfficher();
    cout << "supprimer le vehicule numero : ";
    cin >> rang;
    delete m_listeVehicules[rang-1];
}
Garage::~Garage()
{

}
