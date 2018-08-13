#include "MaFenetre.h"




        MaFenetre::MaFenetre() : QWidget()

{

    setFixedSize(230, 120);


    m_boutonDialogue = new QPushButton(tr("ouvrir la boite de dialogue") , this );

    m_boutonDialogue->move(40,50);




QObject::connect(m_boutonDialogue, SIGNAL(clicked()), this , SLOT(ouvrirDialogue()));
}
void MaFenetre::ouvrirDialogue()
{
QMessageBox::information(this, "Titre de la fenêtre", "Bonjour et bienvenue à<strong>tous les Zéros !</strong>", QMessageBox::Yes | QMessageBox::No);
}
