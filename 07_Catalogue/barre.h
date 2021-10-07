#ifndef BARRE_H
#define BARRE_H
#include <iostream>

using namespace std;

class Barre
{
public:
    Barre(const string &_reference, const double _longueur, const double _densite);
    virtual ~Barre();
    virtual void AfficherCaracteristiques();
    virtual float CalculerMasse() {return 0;}
protected:
    string reference;
    double longueur;
    double densite;

};

#endif // BARRE_H
