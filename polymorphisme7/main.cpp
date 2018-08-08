#include <iostream>
#include <string>
#include <vector>
#include "Vehicule.h"
#include "Voiture.h"// Ne pas oubleir d'inclure les .h
#include "Moto.h"
#include "Camion.h"
#include "Garage.h"
using namespace std;






int main()

{

    vector<Vehicule*> listeVehicules;


    listeVehicules.push_back(new Voiture(15000, 5,3));

    listeVehicules.push_back(new Voiture(12000, 3,3));

    listeVehicules.push_back(new Moto(2000, 212.5,3));


    Moto a(2,3,3);
    Garage b(2,3);
  //  Garage c;
    b.ajouter(new Moto(2,3,3));
    b.info();
  //.ajouter(new Voiture(2,3,3));

//c.info();
//    listeVehicules.push_back(new Camion(200,1));

  // listeVehicules[3]->affiche();
      //On affiche les informations de la première voiture
      //   listeVehicules[0]->affiche();
      //  listeVehicules[1]->affiche();
    // listeVehicules[2]->affiche();

      //listeVehicules[2]->afficheDate();
      //Et celles de la moto
  //  listeVehicules[3]->affiche();
//  Garage listeVehicule;

    //  listeVehicules[-1]->affiche();
  //   listeVehicule.ajouterVehicule(new Moto(2500, 2010, 211.5));
    //On utilise les voitures et les motos


 //gar.ajouter(new Voiture(1000,3,3));
//auto i = 0u

//    for(int i(0); i<listeVehicules.size(); ++i) changement de i(0) pour enlevé le warning
//on fait soit auto i=0u ou std::seize_t
for(std::size_t i = 0; i<listeVehicules.size(); ++i)

    {
  listeVehicules[i]->affiche();
        delete listeVehicules[i];  //On libère la i-ème case mémoire allouée

        listeVehicules[i] = 0;  //On met le pointeur à 0 pour éviter les soucis

    }


    return 0;

}
