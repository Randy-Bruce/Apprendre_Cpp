#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"
#include <iostream>


class BarreCarree : public Barre
{
public:
    BarreCarree(const string &_reference, const double _longueur, const double _densite, const double _coteCarree);
    ~BarreCarree();
    float CalculerSectionCarree();
    virtual void AfficherCaracteristiquesCarree();
    virtual float CalculerMasseCarree();
private:
    double coteCarree;

};

#endif // BARRECARREE_H
