#include <iostream>
#include <string>
#include "Vehicule.h"
#include "Voiture.h"// Ne pas oubleir d'inclure les .h
#include "Moto.h"
using namespace std;




void presenter(Vehicule const& v)  //Présente le véhicule passé en argument

{

    v.affiche();

}


int main()  //Rien n'a changé dans le main()

{

    Vehicule v(1);

    presenter(v);


    Moto m(1,2);

    presenter(m);


    return 0;
}
