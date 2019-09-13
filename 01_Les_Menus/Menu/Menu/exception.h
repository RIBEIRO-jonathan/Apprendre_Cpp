#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <string>

using namespace std;

class Exception
{
public:
    Exception(int _codeErreur, string _message);
    int obtenirCodeErreur() const;
    string obtenirDescription() const;
private:
    int codeErreur;
    string message;
};

#endif // EXCEPTION_H
