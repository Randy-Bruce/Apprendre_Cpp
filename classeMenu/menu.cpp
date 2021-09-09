#include "menu.h"

Menu::Menu(const string &_nom):nom(_nom), longueurMax(0)
{
    // ouvrir le fichier
    ifstream fichier("menu.txt");
    // Si il y a une erreur
    if (!fichier.is_open()){
    // alors Afficher un message indiquant une erreur de lecture
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    // et mettre nbOptions à 0
    nbOption = 0;
    // Sinon calculer nbOptions, le nombre d’options dans le fichier
    }else {
         nbOption = static_cast<int>(count(istreambuf_iterator<char>(fichier),istreambuf_iterator<char>(),'\n'));

         fichier.seekg(0,ios::beg);

    // allouer dynamiquement le tableau options en fonction de nbOptions
         option = new string [nbOption];
    // Pour chaque option dans le fichier
    for(int i = 0 ; i <= nbOption ; i++)
    // Lire l’option et l’affecter dans le tableau options
    {
        fichier >> option[i];

    // Si la taille de l’option est plus grande que longueurMax
    if (static_cast<int>(option->length())>longueurMax){
    // alors longueurMax reçoit la taille de l’option
        longueurMax = static_cast<int>(option->length()) ;
    // FinSi
    }
    // FinPour
    }
    // FinSi
    }
}
