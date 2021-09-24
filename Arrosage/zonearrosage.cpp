#include "zonearrosage.h"
#include <iostream>
using namespace std;


/*------------------------------------------------------------------------Instance Non-Dynamique
ZoneArrosage::ZoneArrosage(const int _numZone, const int _brocheImpulsion, const int _sensA,
     const  int _sensB, const int _brocheHumidite):
    laVanne(_brocheImpulsion,_sensA,_sensB),
    leCapteurHumidite(_brocheHumidite),
    numZone(_numZone)
{
    // reste du code pour le constructeur
}*/


//-------------------------------------------------------------------------Instance Dynamique
ZoneArrosage::ZoneArrosage(const string &_initialisationZone)
{
    int parametres[5];
        size_t prec = 0;
        size_t pos = 0;
        for (int indice = 0;indice < 5;indice++)
        {
            pos = _initialisationZone.find(' ',prec);
            parametres[indice] = atoi(_initialisationZone.substr(prec,pos).c_str());
            prec = pos + 1; // on incrémente pos pour le tour d'après.
        }
        numZone = parametres[0];
        laVanne = new Vanne(parametres[1],parametres[2],parametres[3]);
        leCapteurHumidite = new CapteurHumidite(parametres[4]);
        cout << "Constructeur de la classe ZoneArrosage avec numZone 1" << endl;

}

ZoneArrosage::~ZoneArrosage()
{
    delete laVanne;
    delete leCapteurHumidite;
}
