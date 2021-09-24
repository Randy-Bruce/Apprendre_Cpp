#ifndef MENU_H
#define MENU_H
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include<iomanip>

using namespace std;

class Menu
{
public:
    Menu(const string &_nom);
    ~Menu();
    static void AttendreAppuiTouche();
    int Afficher();
private:
    string nom;
    string * option;
    int nbOption;
    int longueurMax;

};

#endif // MENU_H
