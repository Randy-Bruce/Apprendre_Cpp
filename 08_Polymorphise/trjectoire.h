#ifndef TRJECTOIRE_H
#define TRJECTOIRE_H
#include "element.h"

class Trajectoire
{
public:
    Trajectoire(const int _nbEtapesMaxi);
    ~Trajectoire();
    bool Ajouter(const Element * _Ajouter);
    void Afficher();
private:
    Element **parcours;
    int nbEtapesMax;
    int prochaineEtape;
};

#endif // TRJECTOIRE_H
