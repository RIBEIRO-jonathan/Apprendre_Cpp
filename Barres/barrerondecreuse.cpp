#include "barrerondecreuse.h"
#include <iostream>
#include <math.h>
using namespace std;

/**
 * @brief BarreRondeCreuse::BarreRondeCreuse
 * @details Constructeur de la classe BarreRondeCreuse
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _alliage
 * @param _diametre_plein
 * @param _diametre_creux
 */

BarreRondeCreuse::BarreRondeCreuse(string _reference, int _longueur, float _densite, string _alliage, int _diametre_plein,int _diametre_creux):
    BarreRonde(_reference,_longueur,_densite,_alliage,_diametre_plein),
    diametre_creux(_diametre_creux)
{
    cout << "Constructeur de la classe BarreRonde_Creuse" << endl;
}

/**
 * @brief BarreRondeCreuse::CalculerSectionPleine
 * @return
 */

double BarreRondeCreuse::CalculerSectionPleine()
{
   double section = (M_PI * diametre * diametre) / 4;
   return section;
}

/**
 * @brief BarreRondeCreuse::CalculerSectionCreuse
 * @return
 */

double BarreRondeCreuse::CalculerSectionCreuse()
{
   double section = (M_PI * diametre_creux * diametre_creux) / 4;
   return section;
}

/**
 * @brief BarreRondeCreuse::CalculerSection
 * @return
 */

double BarreRondeCreuse::CalculerSection(){
    double section_creuse = CalculerSectionCreuse();
     double section_pleine = CalculerSectionPleine();
     double section = section_pleine - section_creuse;
     return section;
}

/**
 * @brief BarreRondeCreuse::CalculerMasse
 * @return
 */

double BarreRondeCreuse::CalculerMasse()
{
    double section = CalculerSection();
    double masse = longueur * section * densite;
    return masse;
}
