#ifndef BARRE_H
#define BARRE_H
#include "contenant.h"
#include <string>
using namespace std;

class barre
{
public:
    barre(string _reference,int _longueur,int _densite,string _alliage);
        void AfficherCaracteristiques();

private:
     string reference;
     int longueur;
     int densite;
     string alliage;
};

#endif // BARRE_H
