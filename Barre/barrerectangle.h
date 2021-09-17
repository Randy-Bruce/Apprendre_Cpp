#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"
#include <iostream>


class BarreRectangle : public Barre
{
public:
    BarreRectangle(const string &_reference, const double _longueur, const double _densite, const string &_nomAlliage, const double _hauteurRectangle, const double _largeurRectangle);
    ~BarreRectangle();
    float CalculerSectionRectangle();
private:
    double hauteurRectangle;
    double largeurRectangle;
};

#endif // BARRERECTANGLE_H
