#ifndef BARRE_H
#define BARRE_H
#include <iostream>

using namespace std;

class Barre
{
public:
    Barre(const string &_reference, const double _longueur, const double _densite, const string &_nomAlliage);
    ~Barre();
protected:
    string reference;
    double longueur;
    double densite;
    string nomAlliage;

};

#endif // BARRE_H
