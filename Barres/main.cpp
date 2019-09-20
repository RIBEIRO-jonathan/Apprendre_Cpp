
/**
  * @file main.cpp
  * @brief Utilisation des classes barres
  * @author jr
  * @date 19/09/2019
  */



#include <iostream>
#include "barre.h"
#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarree.h"
#include "barrehexagonale.h"
#include "barrerondecreuse.h"
using namespace std;

/**
 * @brief main
 * @return
 */

int main()
{

    BarreRondeCreuse laBarre("0B-42",50,2,"FER" , 3 , 5);
    double section = laBarre.CalculerSection();
        cout << section << endl;
        double masse = laBarre.CalculerMasse();
        cout << masse << endl;
    return 0;
}
