#ifndef BARREHEXAGONALE_H
#define BARREHEXAGONALE_H
#include "barre.h"
/**
 * @brief The BarreHexagonale class
 */
class BarreHexagonale : public Barre
{
public:
    /**
     * @brief BarreHexagonale
     * @param _reference
     * @param _longueur
     * @param _densite
     * @param _alliage
     * @param _diametre
     */
  BarreHexagonale(string _reference, int _longueur,float _densite, string _alliage, double _diametre);
  /**
   * @brief CalculerSection
   * @return
   */
  double  CalculerSection();
  /**
   * @brief CalculerMasse
   * @return
   */
  double CalculerMasse();
protected:
  /**
     * @brief diametre
     */
    double diametre;
};

#endif // BARREHEXAGONALE_H
