#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"
#include <iostream>
#include "math.h"


class BarreRonde : public Barre
{
public:
    BarreRonde(const string &_reference, const double _longueur, const double _densite, const double _diametreCercle);
    ~BarreRonde();
    float CalculerSectionCercle();
    virtual void AfficherCaracteristiquesRond();
    virtual float CalculerMasseCercle();
private:
   double diametreCercle;
};

#endif // BARRERONDE_H
