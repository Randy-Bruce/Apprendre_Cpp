
#include "ipv4.h"
#include <iostream>

using namespace std;

void AfficherTableau(unsigned char *tab);



// ------------------------------------------------------------------------------ Premier Programme

int main()
{
    unsigned char adresse[4] = {192,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];
    unsigned char premiereAdresse[4];
    unsigned char deniereAdresse[4];
    ipv4 uneAdresse(adresse, 24); // instanciation de la classe IPv4
    cout << "Adresse IPv4 : ";
    AfficherTableau(adresse);
    uneAdresse.ObtenirMasque(masque); // appel d'une méthode
    cout << "Masque : ";
    AfficherTableau(masque);
    uneAdresse.ObtenirAdresseReseau(reseau);
    cout << "Réseau : ";
    AfficherTableau(reseau);
    uneAdresse.ObtenirAdresseDiffusion(diffusion);
    cout << "Diffusion : ";
    AfficherTableau(diffusion);
    uneAdresse.ObtenirPremiereAdresse(premiereAdresse);
    cout << "Premiere adresse : ";
    AfficherTableau(premiereAdresse);
    uneAdresse.ObtenirDerniereAdresse(deniereAdresse);
    cout << "Derniere adresse  : ";
    AfficherTableau(deniereAdresse);
    cout << "Nombre de machine : " << uneAdresse.ObtenirNombreMachine() << endl;
    return 0;
}

void AfficherTableau(unsigned char *tab)
{
    for(int indice=0 ; indice < 4 ; indice ++)
    {
        cout  << static_cast<int> (tab[indice]);
        if(indice < 3)
            cout << "." ;
    }
    cout << endl;
}

// ------------------------------------------------------------------------------ Deuxieme Programme
/*
int main()
{
    unsigned char adresse[4]= {192,168,1,1};
    unsigned char reseau[4];
    ipv4 * uneAdresse = new ipv4(adresse, 24); // instanciation de la classe IPv4
    ipv4 adresseCopie = *uneAdresse; // l'instance est recopiée dans une autre
    cout << "Adresse réseau avant : ";
    adresseCopie.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);
    delete uneAdresse; // destruction de la première instance
    cout << "Adresse réseau après destruction : ";
    adresseCopie.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);
    return 0;
}
*/
