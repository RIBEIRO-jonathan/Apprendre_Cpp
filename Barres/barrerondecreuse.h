#ifndef BARRERONDECREUSE_H
#define BARRERONDECREUSE_H
#include "barre.h"
#include "barreronde.h"

/**
 * @brief The BarreRondeCreuse class
 */
class BarreRondeCreuse: public BarreRonde
{
public:
    /**
     * @brief BarreRondeCreuse
     * @param _reference
     * @param _longueur
     * @param _densite
     * @param _alliage
     * @param _diametre
     * @param _diametre_creux
     */
    BarreRondeCreuse(string _reference, int _longueur,float _densite, string _alliage, int _diametre,int _diametre_creux);

    /**
     * @brief CalculerSectionPleine
     * @return
     */

    double CalculerSectionPleine();

    /**
     * @brief CalculerSectionCreuse
     * @return
     */

    double CalculerSectionCreuse();

    /**
     * @brief CalculerMasse
     * @return
     */

    double CalculerMasse();

    /**
     * @brief CalculerSection
     * @return
     */

    double CalculerSection();
private:
    /**
     * @brief diametre_creux
     */
    double diametre_creux;
};

#endif // BARRERONDECREUSE_H
