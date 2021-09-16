#ifndef BARRE_H
#define BARRE_H
#include <iostream>

using namespace std;

class Barre
{
public:
    Barre(const string &_reference, const double longueur, const double densite, const string &_nom);
private:
    string reference;
    double longueur;
    double densite;
    string nom;

};

#endif // BARRE_H
