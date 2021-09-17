#include "barreronde.h"
#include "barre.h"
#include <iostream>
#include "math.h"


BarreRonde::BarreRonde(const string &_reference, const double _longueur, const double _densite, const string &_nomAlliage, const double _diametreRond):
    Barre(_reference,_longueur,_densite,_nomAlliage),
    diametreRond(_diametreRond)
{
    cout << "Constructeur de la classe BarreRonde" << endl;
}

BarreRonde::~BarreRonde()
{
    cout << "Destructeur de la classe BarreRonde" << endl;
}

float BarreRonde::CalculerSectionRonde()
{
    return (M_PI * (diametreRond * diametreRond)) / 4;
}
