#include "equilibreuse.h"
#include <iostream>

using namespace std;

Equilibreuse::Equilibreuse()
{
    leMoteur = new Moteur(laCarte);
}

Equilibreuse::~Equilibreuse()
{
    cout << "Destructeur de la classe Equilibreuse" << endl;
}
