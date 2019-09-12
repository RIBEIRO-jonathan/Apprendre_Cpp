#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>

using namespace std; // évite d'écrire std::cout

int main()

{

    string nomDuFichier;

    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;

    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*

    //Creation du flux en écriture
    ofstream fichierexport("medailles2.txt");

    if(!leFichier .is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else{

        if(!leFichier .is_open())
            cerr << "Erreur lors de l'ouverture du fichier d'écriture" << endl;
        else {

        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;

        fichierexport << "+"<<setfill('-')<<setw(30)<<"+" << setfill('-') << setw(4) << "+" << setfill('-') << setw(5)<< setfill('-') << "+"<< setw(6) << "+"<<setfill(' ') << endl;

        do{

            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;

            if(leFichier.good())
            {

                fichierexport << "|" <<setw(29) << left << pays<< "|" << setw(3) << right << nbOr << "|" << setw(3) << right << nbArgent << " | "<< setw(3) << right << nbBronze << " | " <<endl;

            }

        }while(!leFichier.eof());
        fichierexport << "+"<<setfill('-')<<setw(30)<<"+" << setfill('-') << setw(4) << "+" << setfill('-') << setw(5)<< setfill('-') << "+"<< setw(6) << "+"<<setfill(' ') << endl;



    }
}
    fichierexport.close();
return 0;


}
