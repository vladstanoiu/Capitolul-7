#include "Persoana.h"
#include <iostream>
using namespace std;

Persoana::Persoana()
{
    //ctor
}

Persoana::Persoana(string prenume , string nume , string materie) : _prenume(prenume) , _nume(nume) , _materie(materie)
{

}

string Persoana::Activitate()
{
    return "cursul";
}
string Persoana::GetNumeComplet()
{
    return _prenume + " " + _nume;
}
Persoana::~Persoana()
{
    //dtor
}
