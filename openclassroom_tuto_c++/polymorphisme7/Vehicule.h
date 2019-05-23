
#ifndef DEF_VEHICULE
#define DEF_VEHICULE


#include <iostream>
#include <string>

class Vehicule
  {
    public:
        Vehicule(int prix,int date);
    virtual void affiche() const;
    virtual void afficheDate() const;

    virtual ~Vehicule();
    protected:

        int m_prix;
    int m_date;
  };
#endif
