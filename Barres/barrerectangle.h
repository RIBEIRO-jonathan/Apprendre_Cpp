#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"
/**
 * @brief The BarreRectangle class
 */
class BarreRectangle : public Barre
{
public:
    /**
     * @brief BarreRectangle
     * @param _reference
     * @param _longueur
     * @param _densite
     * @param _nomDeAlliage
     * @param _largeur
     */
    BarreRectangle(string _reference, int _longueur,int _densite, string _nomDeAlliage, int _largeur);
    /**
     * @brief CalculerSection
     * @return
     */
    double CalculerSection();
private:
    /**
     * @brief largeur
     */
    int largeur;
};
#endif // BARRERECTANGLE_H
