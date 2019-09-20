#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"

/**
 * @brief The BarreRonde class
 */
class BarreRonde: public Barre
{
public:
    /**
     * @brief BarreRonde
     * @param _reference
     * @param _longueur
     * @param _densite
     * @param _alliage
     * @param _diametre
     */
    BarreRonde(string _reference, float _longueur, float _densite, string _alliage, float _diametre );
    /**
     * @brief CalculerSection
     * @return
     */
    double  CalculerSection();
    protected:
    /**
     * @brief diametre
     */
    float diametre;
};

#endif // BARRERONDE_H
