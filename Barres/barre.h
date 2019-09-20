#ifndef BARRE_H
#define BARRE_H

#include <string>
using namespace std;


/**
 * @brief The Barre class
 */

class Barre
{
public:
    /**
     * @brief Barre
     * @param _reference
     * @param _longueur
     * @param _densite
     * @param _alliage
     */
    Barre(string _reference,int _longueur,int _densite,string _alliage);
    /**
     * @brief AfficherCaracteristiques
     */
    void AfficherCaracteristiques();
    protected:
    /**
     * @brief reference
     */
    string reference;
    /**
      * @brief longueur
      */
     int longueur;
     /**
      * @brief densite
      */
     int densite;
     /**
      * @brief alliage
      */
     string alliage;
};

#endif // BARRE_H
