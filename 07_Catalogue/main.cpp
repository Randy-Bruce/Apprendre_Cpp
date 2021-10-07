#include <iostream>
#include "barrecarree.h"

using namespace std;

int main()
{
    BarreCarree uneBarre("Barre 2x2 en Cuivre", 200, 8.920, 2);
        uneBarre.AfficherCaracteristiquesCarree();
        cout << "Le poids de la barre est : " ;
        cout << uneBarre.CalculerMasseCarree() / 1000.0;
        cout << " kg" << endl;
        cout << endl;
        return 0;
}
