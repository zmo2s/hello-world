#include "Guerrier.h"

using namespace std;

Guerrier::Guerrier() :Personnage(),m_vie(100)
{

}
Guerrier::Guerrier(string nom): Personnage(nom), m_vie(100)
{

}
void Guerrier::sePresenter() const

{

   Personnage::sePresenter();

    cout << "Je suis un Guerrier redoutable." << endl;

}
