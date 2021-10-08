#include "segment.h"
#include <iostream>
using namespace std;

Segment::Segment(const double _longeur, const double _angle,const int _numero,const int _vitesse):
    Element(_numero,_vitesse),
    longueur(_longeur),
    angle(_angle)
{

}

void Segment::Afficher()
{
    cout << "(" << numero << ") " << "SEGMENT L = " << longueur << "       A = " << angle << "       V = "<< vitesse << endl;
}
