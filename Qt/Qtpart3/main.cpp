#include <QApplication>

#include "MaFenetre.h"





int main(int argc, char *argv[])

{

    QApplication app(argc, argv);



    MaFenetre fenetre(300,150);
    //Fenetre2 c(40,40);
//   fenetre c;
    fenetre.show();



    return app.exec();

}
