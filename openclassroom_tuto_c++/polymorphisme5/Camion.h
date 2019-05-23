#ifndef DEF_CAMION
#define DEF_CAMION

#include <iostream>
#include <string>

#include "Vehicule.h"



class Camion :public Vehicule
   {
   public:
    Camion(int prix,int poidsTransportable);
     virtual void affiche()const;
     virtual ~Camion();

   private:

     int m_poidsTransportable;

     };


  #endif
