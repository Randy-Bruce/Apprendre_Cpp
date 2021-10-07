#include "barreronde.h"
#include "barre.h"
#include <iostream>
#include "math.h"


BarreRonde::BarreRonde(const string &_reference, const double _longueur, const double _densite, const double _diametreCercle):
    Barre(_reference,_longueur,_densite),
    diametreCercle(_diametreCercle)
{
    cout << "Constructeur de la classe BarreRonde" << endl;
}

BarreRonde::~BarreRonde()
{
    cout << "Destructeur de la classe BarreRonde" << endl;
}

float BarreRonde::CalculerSectionCercle()
{
    float section = 0;
    section = (M_PI * (diametreCercle * diametreCercle)) / 4;
    return section;
}

void BarreRonde::AfficherCaracteristiquesRond()
{
    cout << "Caractéristiques :" << endl ;
    cout << "Reference :" << reference << endl ;
    cout << "Longueur :" << longueur << endl ;
    cout << "Densite :" << densite << endl ;
    cout << "Diametre :" << diametreCercle << endl ;
}

float BarreRonde::CalculerMasseCercle()
{
    float masse = 0;
    masse = longueur * CalculerSectionCercle() * densite;
    return masse;
}
