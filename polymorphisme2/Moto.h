#ifndef DEF_MOTO
#define DEF_MOTO

#include <iostream>
#include <string>

#include "Vehicule.h"



class Moto :public Vehicule
   {
   public:
    Moto();
     void affiche()const;
   private:

     double m_vitesse;

     };


  #endif
