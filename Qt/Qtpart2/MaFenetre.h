#ifndef DEF_MAFENETRE
#define DEF_MAFENETRE

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MaFenetre : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    MaFenetre(int a,int b);
   // Fenetre2(int a,int b);
    private:
    QPushButton *m_bouton;
    int a;
    int b;
};

#endif
