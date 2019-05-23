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
    ////BOITE DIALOGUE CLASSIQUE
    QString dossier = QFileDialog::getExistingDirectory(this);


    //////selectione une imae par celle prédéfinie au format choisie jpg ... jpeg .... que des images
    QString fichier = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QString(), "Images (*.png *.gif *.jpg *.jpeg)");
        QMessageBox::information(this, "Fichier", "Vous avez sélectionné :\n" + fichier);

 }
