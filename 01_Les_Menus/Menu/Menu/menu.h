
#ifndef MENU_H
#define MENU_H

#include <string>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;
///
/// \brief The Menu class
///
class Menu{
public:
    ///
    /// \brief Menu
    /// \param _nom
    ///
    Menu(const string &_nom);

    ~Menu();

    ///
    /// \brief Afficher
    /// \return


    int Afficher();

    ///
    /// \brief AttendreAppuiTouche
    ///

    static void AttendreAppuiTouche();


private:
    ///
    /// \brief nom
    /// nom du fichier a ouvrir pour créer le menu
    ///
    string nom;
    ///
    /// \brief options
    /// Pointeur sur tableau
    ///
    string *options;
    ///
    /// \brief nbOptions
    /// Nombre d'items contenu dans le menu
    ///
    int nbOptions;
    ///
    /// \brief longueurMax
    /// longueur maximum d'un item
    ///
    int longueurMax;

};
///
/// \brief The CHOIX_MENU enum
///

enum CHOIX_MENU
{
    OPTION_1=1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};

#endif // MENU_H
