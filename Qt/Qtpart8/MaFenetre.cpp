#include "MaFenetre.h"




MaFenetre::MaFenetre() : QWidget()
{
    setFixedSize(230, 120);

    m_boutonDialogue = new QPushButton("Ouvrir la boîte de dialogue", this);
    m_boutonDialogue->move(40, 50);

    //pseudo = ""; // QString pseudo à mettre de les privates du .h
  //  m_boutonDialogue2 = new QPushButton(this); // Affiche-le où tu veux avec move() ou setGeometry() que je conseille plus que move()
   // m_boutonDialogue2->hide(); // On masque le bouton...

    QWidget::connect(m_boutonDialogue, SIGNAL(clicked()), this, SLOT(ouvrirDialogue()));
}



void MaFenetre::ouvrirDialogue()
{
   /*
    /////////////////////////////CHOISIR POLICE///////////////
      bool ok = false;

    QFont police = QFontDialog::getFont(&ok , m_boutonDialogue->font(),this,"choissiser) une police");
    if(ok)
    {
        m_boutonDialogue->setFont(police);
    }
    */
    ////////////////////////////CHOISIR COULEUR///////////////////
    QColor couleur = QColorDialog::getColor(Qt::white,this);
    QPalette palette;
    palette.setColor(QPalette::ButtonText,couleur);
    m_boutonDialogue->setPalette(palette);
 }
