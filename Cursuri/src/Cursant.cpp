#include "Cursant.h"

Cursant::Cursant()
{
    //ctor
}
Cursant::Cursant(string prenume ,string nume,string materie) : Persoana(prenume , nume , materie) , _notaTeme(0) , _notaTeste(0) , _notaProiect(0)
{

}
Cursant::~Cursant()
{
    //dtor
}

string Cursant::Absolva()
{
    if (HasGrades())
    {
       if (IsAverageOk())
        {
         return "absolva";
       }
       else
        {
            return "nu absolva";
        }
    }
    else
    {
        return "nu are note suficiente ";
    }

}

bool Cursant::HasGrades()
{

    if (_notaTeme == 0 || _notaProiect == 0 || _notaTeste == 0)
    {
       return false;
    }
    return true;
}
bool Cursant::IsAverageOk()
{
    if ((_notaProiect + _notaTeme +_notaTeste )/ 3 >= 7)
    {
        return true;
    }
    return false;
}

/*Absolva, care nu primește parametri și returnează o valoare de tip string. Metoda verifică, folosind o metodă dedicată,
 dacă cursantul are o valoare nenulă pentru toți membrii care rețin note. De asemena verifică,
  folosind o altă metodă dedicată, că media notelor e mai mare sau egală cu 7. Șirul returnat este
dacă nu are toți membrii ce rețin note cu valori nenule, ” nu are note suficiente"
dacă are suficiente note dar media e sub 7, ” nu absolva"
dacă are suficiente note și media e mai mare sau egală cu 7, ” absolva"*/
