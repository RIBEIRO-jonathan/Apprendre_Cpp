#include "barrecarree.h"
#include <iostream>
using namespace std;

/**
 * @brief BarreCarree::BarreCarree
 * @details Constructeur de la classe BarreCarree
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _alliage
 * @param _cote
 */

BarreCarree::BarreCarree(string _reference, int _longueur, int _densite, string _alliage, unsigned int _cote):
    Barre(_reference, _longueur, _densite, _alliage),
    cote(_cote)
{
cout << "Constructeur de la classe BarreCarree" << endl;
}

/**
 * @brief BarreCarree::CalculerSection
 * @return
 */

double BarreCarree::CalculerSection()
{
    double section = cote * cote;
    return section;
}

/**
 * @brief BarreCarree::CalculerMasse
 * @return
 */

double BarreCarree::CalculerMasse()
{
    double section = CalculerSection();
    double masse = longueur * section * densite;
    return masse;
}
