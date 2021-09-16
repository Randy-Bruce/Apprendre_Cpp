#ifndef CAISSEDEBOUTEILLES_H
#define CAISSEDEBOUTEILLES_H
#include "contenant.h"


class CaisseDeBouteilles : public Contenant
{
public:
    CaisseDeBouteilles();
    ~CaisseDeBouteilles();
    int CalculerVolume();
private:
    int nbBouteilles;
    int contenance;
};

#endif // CAISSEDEBOUTEILLES_H
