#include "vanne.h"
#include <iostream>
using namespace std;

Vanne::Vanne(const gpio_num_t _brocheImpulsion,const gpio_num_t _sensA,const gpio_num_t _sensB):
    brocheImpulsion(_brocheImpulsion),
    sensA(_sensA),
    sensB(_sensB)
{
    cout << "Constructeur de la classe Vanne avec impulsion sur 25, sens A=15 et B=5" << endl;
}
