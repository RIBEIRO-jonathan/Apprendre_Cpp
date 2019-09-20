#include "barrehexagonale.h"
#include <iostream>
#include <math.h>


/**
 * @brief BarreHexagonale::BarreHexagonale
 * @details Constructeur de la classe BarreHexagonale
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _alliage
 * @param _diametre
 */
BarreHexagonale::BarreHexagonale(string _reference, int _longueur, float _densite, string _alliage, double _diametre):
    Barre(_reference,_longueur,_densite, _alliage ),
    diametre(_diametre)
{
    cout << "Constructeur de la classe BarreHexagone" << endl;
}

/**
 * @brief BarreHexagonale::CalculerSection
 * @return
 */

double BarreHexagonale::CalculerSection()
{
  double section = (2 * sqrt((3*diametre * diametre) / 4));
  return section;

}

/**
 * @brief BarreHexagonale::CalculerMasse
 * @return
 */

double BarreHexagonale::CalculerMasse()
{
    double section = CalculerSection();
    double masse = longueur * section * densite;
    return masse;
}
