#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H

#include "vanne.h"
#include "capteurhumidite.h"
#include <iostream>

using namespace std;

class ZoneArrosage
{
    /*--------------------------------------------------------Instance Non-Dynamique
private:
    Vanne laVanne;
    CapteurHumidite leCapteurHumidite;
    int numZone;
public:
    ZoneArrosage(int _numZone,
                 const gpio_num_t _brocheImpulsion,
                 const gpio_num_t _sensA,
                 const gpio_num_t _sensB,
                 const gpio_num_t _brocheHumidite);
    void Piloter();*/

    //--------------------------------------------------------Instance Dynamique
private:
    Vanne *laVanne;
    CapteurHumidite *leCapteurHumidite;
    int numZone;
public:
    ZoneArrosage(const string &_initialisationZone);
    ~ZoneArrosage();
    void Piloter();
};

#endif // ZONEARROSAGE_H
