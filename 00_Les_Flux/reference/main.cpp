#include <iostream>

using namespace std;

//reference.cpp
/*int main()
{
    int val1=124;
    int val2=0;
    int resultat;
    int &ref1 = val1;//affectation de la référence ref1 à la variable val1
    resultat = ref1 + 5;//équivaut à : resultat = val1 + 5;
    int &ref2 = val2; //affectation de la référence ref2 à la variable val2
    ref2 = val1 + 10;//équivaut à : val2 = val1 + 10;
    cout <<"La variable resultat vaut: "<<resultat<<endl;
    cout<<"La variable val2 vaut: "<<val2<<endl;
    return 0;
}*/


//appelsdefonctions.cpp

void Ajouter(int a, int b, int &c)
{
    c = a+b;
}

int main()
{
    int a= 1;
    int b= -2;
    int c= 0;
    cout << "avant l'appel de Ajouter "<<endl;
    cout <<"a= "<<a<<endl;
    cout <<"b= "<<b<<endl;
    cout <<"c= "<<c<<endl;

    //Appelle la fonction Ajouter à compléter dans le tableau suivant le cas.
    Ajouter(a,b,c);

    cout <<"après l'appel de Ajouter"<<endl;
    cout <<"a= " << a << endl;
    cout <<"b= " << b << endl;
    cout <<"c= " << c << endl;
    return 0;
}
