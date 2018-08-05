#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <iostream>
#include <string>
#include "Vehicule.h"
//ne pas oublié d'inclure Personnage.h pour en hérité



class voiture : public  Vehicule
  {
  public:
    Voiture();
    void affiche() const;

  private:

    int m_portes
  };
#endif
