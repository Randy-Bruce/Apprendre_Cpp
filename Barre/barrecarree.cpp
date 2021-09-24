#include "barrecarree.h"
#include "barre.h"
#include <iostream>


using namespace std;

BarreCarree::BarreCarree(const string &_reference, const double _longueur, const double _densite, const string &_nomAlliage, const double _hauteurCarree):
    Barre(_reference,_longueur,_densite,_nomAlliage),
    hauteurCarree(_hauteurCarree)
{
    cout << "Constructeur de la classe BarreCarre" << endl;
}

BarreCarree::~BarreCarree()
{
    cout << "Destructeur de la classe BarreCarre" << endl;
}

float BarreCarree::CalculerSectionCarree()
{
    float section = 0;
    section = hauteurCarree * hauteurCarree;
    return section;
}

float BarreCarree::CalculerMasseCarree()
{
    float masse = 0;
    masse = longueur * CalculerSectionCarree() * densite;
    return masse;
}
