#ifndef BARRE_H
#define BARRE_H
#include <iostream>

using namespace std;

class Barre
{
public:
    Barre(const string &_reference, const int longueur, const int densite, const string &_nom);
private:
    string reference;
    int longueur;
    int densite;
    string nom;

};

#endif // BARRE_H
