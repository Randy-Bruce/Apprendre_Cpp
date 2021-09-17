#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"
#include <iostream>


class BarreCarree : public Barre
{
public:
    BarreCarree(const string &_reference, const double _longueur, const double _densite, const string &_nomAlliage, const double _hauteurCarre);
    ~BarreCarree();
    float CalculerSectionCercle();
private:
    double hauteurCarre;

};

#endif // BARRECARREE_H
