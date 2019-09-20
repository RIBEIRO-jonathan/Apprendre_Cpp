#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"
/**
 * @brief The BarreCarree class
 */
class BarreCarree: public Barre
{
public:
    /**
     * @brief BarreCarree
     * @param _reference
     * @param _longueur
     * @param _densite
     * @param _nomDeAlliage
     * @param _cote
     */
    BarreCarree(string _reference, int _longueur,int _densite, string _nomDeAlliage, unsigned int _cote);
    /**
     * @brief CalculerSection
     * @return
     */
    double CalculerSection();
    /**
     * @brief CalculerMasse
     * @return
     */
    double CalculerMasse();
private:
    /**
    * @brief cote
    */
   unsigned int cote;
};

#endif // BARRECARREE_H
