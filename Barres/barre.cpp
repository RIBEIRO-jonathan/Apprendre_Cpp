
#include "barre.h"
#include <iostream>


using namespace std;

/**
 * @brief Barre::Barre
 * @details Constructeur de la classe Barre
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _alliage
 */



Barre::Barre(string _reference, int _longueur,int _densite, string _alliage):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    alliage(_alliage)
{
    cout << "Constructeur de la classe Barre" << endl;
}


/**
 * @brief Barre::AfficherCaracteristiques
 * @details affiche les caractéristiques de la barre
 */


void Barre::AfficherCaracteristiques()
{
    cout << "Référence: " << reference << endl;
    cout << "Longueur: " << longueur <<" cm" << endl;
    cout << "Densité : " << densite <<" kg/m" <<endl;
    cout << "Nom de l'alliage: " << alliage << endl;
}
