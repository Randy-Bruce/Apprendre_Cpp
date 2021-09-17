#include "barrecarree.h"
#include "barre.h"
#include <iostream>


using namespace std;

BarreCarree::BarreCarree(const string &_reference, const double _longueur, const double _densite, const string &_nomAlliage, const double _hauteurCarre):
    Barre(_reference,_longueur,_densite,_nomAlliage),
    hauteurCarre(_hauteurCarre)
{
    cout << "Constructeur de la classe BarreCarre" << endl;
}

BarreCarree::~BarreCarree()
{
    cout << "Destructeur de la classe BarreCarre" << endl;
}

float BarreCarree::CalculerSectionCercle()
{
    return hauteurCarre * hauteurCarre;
}
