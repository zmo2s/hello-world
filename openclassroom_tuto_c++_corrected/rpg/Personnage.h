#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
    public:

    Personnage() ;
    Personnage& operator=(Personnage const& personnageAcopier);
    Personnage(Personnage const& personnageACopier);
    Personnage(std::string nomArme, int degatsArme);
   ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat();

    private:

    Arme *m_arme;
    int m_vie;
    int m_mana;
  //  Arme m_arme;
  //  Arme *m_arme;
};

#endif
