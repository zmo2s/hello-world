
#ifndef DEF_VEHICULE
#define DEF_VEHICULE


#include <iostream>
#include <string>

class Vehicule
  {
    public:
        Vehicule(int prix);
    virtual void affiche() const;
    virtual ~Vehicule();
    protected:

        int m_prix;

  };
#endif
