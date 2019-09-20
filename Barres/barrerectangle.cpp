#include "barrerectangle.h"
#include <iostream>
using namespace std;

/**
 * @brief BarreRectangle::BarreRectangle
 * @details Constructeur de la classe BarreRectangle
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _alliage
 * @param _largeur
 */

BarreRectangle::BarreRectangle(string _reference, int _longueur, int _densite, string _alliage, int _largeur):
    Barre(_reference, _longueur, _densite, _alliage),
    largeur(_largeur)
{
cout << "Constructeur de la classe BarreRectangle" << endl;
}

/**
 * @brief BarreRectangle::CalculerSection
 * @return
 */

double BarreRectangle::CalculerSection()
{
    double section = largeur * longueur;
    return section;
}
