#ifndef DEF_GARAGE
#define DEF_GARAGE

#include <iostream>
#include <string>
#include <vector>

#include "Vehicule.h"



class Garage :public Vehicule
   {
   public:
   Garage();

  void ajouter(Vehicule* a);
     virtual ~Garage();


   private:
std::vector<Vehicule*> m_listeVehicules;
int m_prix;

     };


  #endif
