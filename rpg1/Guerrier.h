#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include <iostream>
#include <string>
#include "Personnage.h"
//ne pas oublié d'inclure Personnage.h pour en hérité

class Guerrier : public Personnage
{
public:
 Guerrier();
Guerrier(std::string nom);
      void sePresenter() const;
  void frappeCommeUnSourdAvecUnMarteau() const;

    //méthode qui ocncerne que les guerriers
  protected:
  int m_vie;

std::string m_nom;
};
#endif
