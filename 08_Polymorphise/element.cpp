#include "element.h"

Element::Element(const int _numero,const int _vitesse):
    numero(_numero),
    vitesse(_vitesse)
{
    numero = 0;
    if (vitesse==0){
        vitesse = 1;
    }

}

Element::~Element()
{

}

void Element::Afficher()
{

}


void Element::setNumero(int value)
{
    numero = value;
}
