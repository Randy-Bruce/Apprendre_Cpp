#include "capteurhumidite.h"
#include <iostream>
using namespace std;

CapteurHumidite::CapteurHumidite(const gpio_num_t _brocheHumidite):
    brocheHumidite(_brocheHumidite)
{
    cout << "Constructeur de la classe CapteurHumidite sur la broche 12" <<endl;
}
