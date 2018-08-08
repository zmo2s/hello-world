#ifndef DEF_GARAGE
#define DEF_GARAGE

#include <iostream>
#include <string>
#include <vector>

#include "Vehicule.h"



class Garage :public Vehicule
   {
   public:
   Garage(int prix,int date);
//void add(Vehicule* vehicule)

     virtual ~Garage();
     virtual void ajouter(Vehicule* vehicule);
    void supprimerVehicule();
void info();

   private:
std::vector<Vehicule*> m_listeVehicules;
int m_prix;

     };


  #endif
