#include "MaFenetre.h"




MaFenetre::MaFenetre() : QWidget()
{
    setFixedSize(230, 120);

    m_boutonDialogue = new QPushButton("Ouvrir la boîte de dialogue", this);
    m_boutonDialogue->move(40, 50);

    pseudo = ""; // QString pseudo à mettre de les privates du .h
    m_boutonDialogue2 = new QPushButton(this); // Affiche-le où tu veux avec move() ou setGeometry() que je conseille plus que move()
    m_boutonDialogue2->hide(); // On masque le bouton...

    QWidget::connect(m_boutonDialogue, SIGNAL(clicked()), this, SLOT(ouvrirDialogue()));
}



void MaFenetre::ouvrirDialogue()
{
    bool ok = false;
    pseudo = QInputDialog::getText(this, "Pseudo", "Quel est votre pseudo ?", QLineEdit::Normal, QString(), &ok);

    if (ok && !pseudo.isEmpty())
    {
        m_boutonDialogue2->setText("Bonjour " + pseudo);
        m_boutonDialogue2->show();
    }
    else
    {
        QMessageBox::critical(this, "Pseudo", "Vous n'avez pas voulu donner votre nom... snif.");
    }
}
