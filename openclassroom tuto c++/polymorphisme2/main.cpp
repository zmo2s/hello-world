#include <iostream>
#include <string>
#include "Vehicule.h"
#include "Voiture.h"// Ne pas oubleir d'inclure les .h
#include "Moto.h"
using namespace std;


void presenter(Vehicule v)  //Présente le véhicule passé en argument

{

    v.affiche();

}


int main()

{

    Vehicule v;

    presenter(v);


    Moto m;

    presenter(m);


    return 0;

}
