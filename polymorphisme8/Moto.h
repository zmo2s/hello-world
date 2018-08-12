#ifndef DEF_MOTO
#define DEF_MOTO

#include <iostream>
#include <string>

#include "Vehicule.h"



class Moto :public Vehicule
   {
   public:
    Moto(int prix,int date,double vitesseMax);
     virtual void affiche()const;
     virtual ~Moto();

   private:

     double m_vitesse;

     };


  #endif
