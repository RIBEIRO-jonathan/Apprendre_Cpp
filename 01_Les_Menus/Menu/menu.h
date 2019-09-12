#ifndef MENU_H
#define MENU_H

#include <string>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

class Menu{
public:
    Menu(const string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();

private:
    string nom;
    string *options;
    int nbOptions;
    int longueurMax;
};

#endif // MENU_H
