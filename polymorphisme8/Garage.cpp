#include "Garage.h"

using namespace std;

Garage::Garage() :m_listeVehicules(0)
{
    //test pour voir si il stock bien des variable vehicule
    m_listeVehicules.push_back(new Moto(2500, 2010, 212.5));
    m_listeVehicules.push_back(new Camion(8500, 2009, 3500));
    //:m_listeVehicules(listeVehicules)
}


void Garage::ajouter(Vehicule* a)

{

  m_listeVehicules.push_back(a);

}

Garage::~Garage()
{

}
