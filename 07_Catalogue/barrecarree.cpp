#include "barrecarree.h"
#include "barre.h"
#include <iostream>


using namespace std;

BarreCarree::BarreCarree(const string &_reference, const double _longueur, const double _densite, const double _coteCarree):
    Barre(_reference,_longueur,_densite),
    coteCarree(_coteCarree)
{
    cout << "Appel du constructeur de BarreCarre" << endl;
}

BarreCarree::~BarreCarree()
{
    cout << "Appel du destructeur de BarreCarre" << endl;
}

float BarreCarree::CalculerSectionCarree()
{
    float section = 0;
    section = coteCarree * coteCarree;
    return section;
}

void BarreCarree::AfficherCaracteristiquesCarree()
{
    cout << "Caractéristiques :" << endl ;
    cout << "Reference :" << reference << endl ;
    cout << "Longueur :" << longueur << endl ;
    cout << "Densite :" << densite << endl ;
    cout << "Cote du carre :" << coteCarree << endl ;
}

float BarreCarree::CalculerMasseCarree()
{
    float masse = 0;
    masse = longueur * CalculerSectionCarree() * densite;
    return masse;
}
