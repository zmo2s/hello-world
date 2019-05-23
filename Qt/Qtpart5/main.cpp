#include <QApplication>

#include "MaFenetre.h"





int main(int argc, char *argv[])

{

    QApplication app(argc, argv);



   MaFenetre fenetre;
    //Fenetre2 c(40,40);
//   fenetre c;
   //fenetre.MaFenetre();
   fenetre.changerLargeur(50);
   fenetre.show();



    return app.exec();

}
