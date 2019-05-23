#include "MaFenetre.h"



MaFenetre::MaFenetre(int a,int b) : QWidget()

{



setFixedSize(a,b);

    // Construction du bouton

    m_bouton = new QPushButton("Pimp mon bouton !", this);



    m_bouton->setFont(QFont("Comic Sans MS", 14));

    m_bouton->setCursor(Qt::PointingHandCursor);

    m_bouton->setIcon(QIcon("smile.png"));

    m_bouton->move(60, 50);

}
/*Fenetre2::Fenetre2(int a ,int b) : QWidget()
{
    setFixedSize(a,b);
}
*/
