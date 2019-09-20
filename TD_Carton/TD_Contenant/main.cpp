#include <iostream>
#include "carton.h"
#include "contenant.h"
#include "caissedebouteilles.h"
#include "barre.h"

using namespace std;

int main()
{

/*
    caisseDeBouteilles uneCaisseDeBouteilles(3,3,3,10,2);
    cout << "Le Volume des Bouteilles est de : " << uneCaisseDeBouteilles.CalculerVolume() << " L" << endl;
    cout << "Le Volume de la Caisse de Bouteille est de : " << uneCaisseDeBouteilles.contenant::CalculerVolume()  << "cm3 " << endl;
*/

    barre laBarre("0B-52",50,5,"Fer");
       laBarre.AfficherCaracteristiques();

    return 0;
}
