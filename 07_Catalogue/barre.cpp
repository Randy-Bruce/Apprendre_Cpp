#include "barre.h"
#include <iostream>

using namespace std;

Barre::Barre(const string &_reference, const double _longueur, const double _densite):
    reference(_reference),
    longueur(_longueur),
    densite(_densite)

{
    cout << "Appel du construteur de Barre" << endl;
}

Barre::~Barre()
{
    cout << "Appel du destructeur de Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
        cout << "Caractéristiques :" << endl ;
        cout << "reference :" << reference << endl ;
        cout << "longueur :" << longueur << endl ;
        cout << "densite :" << densite << endl ;

}
