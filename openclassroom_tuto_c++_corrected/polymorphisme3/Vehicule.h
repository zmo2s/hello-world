
#ifndef DEF_VEHICULE
#define DEF_VEHICULE


#include <iostream>
#include <string>

class Vehicule
  {
    public:
        Vehicule();
    virtual void affiche() const;

    protected:

        int m_prix;

  };
#endif
