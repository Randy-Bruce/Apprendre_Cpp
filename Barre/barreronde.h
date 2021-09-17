#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"
#include <iostream>
#include "math.h"


class BarreRonde : public Barre
{
public:
    BarreRonde(const string &_reference, const double _longueur, const double _densite, const string &_nomAlliage, const double _diametreRond);
    ~BarreRonde();
    float CalculerSectionRonde();
private:
   double diametreRond;
};

#endif // BARRERONDE_H
