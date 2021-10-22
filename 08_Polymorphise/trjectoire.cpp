#include "trjectoire.h"
#include "element.h"
#include <iostream>
using namespace std;

Trajectoire::Trajectoire(const int _nbEtapesMaxi):
    nbEtapesMax(_nbEtapesMaxi)
{

}

Trajectoire::~Trajectoire()
{

}


void Trajectoire::Afficher()
{
    cout << "Trajectoire: " << endl;
}
