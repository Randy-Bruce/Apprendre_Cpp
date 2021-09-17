#include "barrerectangle.h"
#include "barre.h"
#include <iostream>




BarreRectangle::BarreRectangle(const string &_reference, const double _longueur, const double _densite, const string &_nomAlliage, const double _hauteurRectangle, const double _largeurRectangle):
    Barre(_reference,_longueur,_densite,_nomAlliage),
    hauteurRectangle(_hauteurRectangle),
    largeurRectangle(_largeurRectangle)
{
    cout << "Constructeur de la classe BarreRectangle" << endl;
}

BarreRectangle::~BarreRectangle()
{
    cout << "Destructeur de la classe BarreRectangle" << endl;
}

float BarreRectangle::CalculerSectionRectangle()
{
    return hauteurRectangle * largeurRectangle;
}
