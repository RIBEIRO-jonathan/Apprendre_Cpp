#include "exception.h"


Exception::Exception(int _codeErreur, string _message)
{
    codeErreur = _codeErreur;
    message = _message;
}

int Exception::obtenirCodeErreur() const
{
    return codeErreur;
}

string Exception::obtenirDescription() const
{
    return message;
}

