#include "element.h"

Element::Element(const int _numero,const int _vitesse):
    numero(_numero),
    vitesse(_vitesse)
{
    vitesse=1;
}

Element::~Element()
{

}

void Element::Afficher()
{

}

int Element::getNumero() const
{
    return numero;
}

void Element::setNumero(int value)
{
    numero = value;
}
