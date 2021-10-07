#include "barrerectangle.h"
#include "barre.h"
#include <iostream>




BarreRectangle::BarreRectangle(const string &_reference, const double _longueur, const double _densite, const double _hauteurRectangle, const double _largeurRectangle):
    Barre(_reference,_longueur,_densite),
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
    float section = 0;
    section = hauteurRectangle * largeurRectangle;
    return section;
}

void BarreRectangle::AfficherCaracteristiquesRectangle()
{
    cout << "Caractéristiques :" << endl ;
    cout << "Reference :" << reference << endl ;
    cout << "Longueur :" << longueur << endl ;
    cout << "Densite :" << densite << endl ;
    cout << "Hauteur :" << hauteurRectangle << endl ;
    cout << "Largeur :" << largeurRectangle << endl ;
}

float BarreRectangle::CalculerMasseRectangle()
{
    float masse = 0;
    masse = longueur * CalculerSectionRectangle() * densite;
    return masse;
}
