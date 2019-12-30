#include "Mentor.h"

Mentor::Mentor()
{
    //ctor
}
Mentor::Mentor( string prenume , string nume, string materie) : Persoana(prenume , nume , materie)
{

}
void Mentor::SchimbaMaterie(string materie)
{
    SetMaterie(materie);
}
 void Mentor::SchimbaMentor(string prenume ,string nume)
 {
     SetPrenume(prenume);
     SetNume(nume);
 }
Mentor::~Mentor()
{
    //dtor
}
