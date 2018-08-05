#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE


#include <iostream>
#include <string>
//#include "Arme.h"
//#include "Guerrier.h"
//#include "Magicien.h"

class Personnage
{
    public:
    Personnage();
      Personnage(std::string nom);
      void recevoirDegats(int degats);
      void coupDePoing(Personnage &cible)const;
      void sePresenter() const;
    protected: //accesible au fenfats (geurrier etm agicien) pour des modification de la vie ou nom en private impossible de modfiié marche seulement pour lh'éritage dans le cas des enfants

      int m_vie;

  std::string m_nom;
    };

#endif
