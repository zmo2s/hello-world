#include <iostream>
#include <string>
#include "Personnage.h"
#include "Guerrier.h"// Ne pas oubleir d'inclure les .h
#include "Magicien.h"
using namespace std;


int main()
{
  Guerrier mister;

Personnage mr;

  mr.coupDePoing(mister);

  mister.coupDePoing(mr);
    // Cr�ation des personnages
    //Personnage david, goliath("Ep�e aiguis�e", 20);
    Personnage david("Zoe");
    Personnage marcel("Marcel");
marcel.sePresenter();
Guerrier monGuerrier("monGuerrier");
monGuerrier.sePresenter();
Personnage monPersonnage;
mr.sePresenter();
mister.sePresenter();
    return 0;
}
