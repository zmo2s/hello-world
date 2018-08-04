
#include "Personnage.h"


using namespace std;


Personnage::Personnage() : m_arme(0),m_vie(100), m_mana(100)
{
 m_arme =  new Arme();
}

Personnage::Personnage(string nomArme, int degatsArme) : m_arme(0),m_vie(100), m_mana(100)
{
    m_arme=new Arme(nomArme,degatsArme);
}
Personnage::Personnage(Personnage const& personnageACopier) : m_arme(0),m_vie(personnageACopier.m_vie),m_mana(personnageACopier.m_mana)
{
  m_arme = new Arme(*(personnageACopier.m_arme));
}



Personnage& Personnage::operator=(Personnage const& personnageACopier)
{
  if(this != &personnageACopier)
  {

    delete m_arme;
    m_arme = new Arme(*(personnageACopier.m_arme));
    m_vie =personnageACopier.m_vie;
    m_mana=personnageACopier.m_mana;
  }
  return *this;
}






Personnage::~Personnage()
{
   delete m_arme;
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_arme->getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100)
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant()
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Personnage::afficherEtat()
{
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme->afficher();
}
