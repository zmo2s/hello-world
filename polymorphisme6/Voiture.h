#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <iostream>
#include <string>
#include "Vehicule.h"
//ne pas oublié d'inclure Personnage.h pour en hérité



class Voiture : public  Vehicule
  {
  public:
  //  voiture();
    Voiture(int prix,int date,int portes);
  virtual void affiche() const;
  virtual ~Voiture();
  private:

    int m_portes;
  };
#endif
