#include "Roata.h"

Roata::Roata()
{
}

Roata::Roata(Anvelopa anvelopa, Janta janta) : _anvelopa(anvelopa), _janta(janta)
{

}

bool Roata::IsFlat()
{
    if (_anvelopa.GetPresiune() < 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Roata::SchimbaRoata(Anvelopa anvelopa, Janta janta)
{
_anvelopa = anvelopa;
_janta = janta;
}

void Roata::UmflaRoata(double presiune)
{
_anvelopa.UmflaAnvelopa(presiune);
}

Roata::~Roata()
{
    //dtor
}


/*membri
_anvelopa
_janta
constructor
unul care primește doi parametri, câte unul pentru fiecare membru și inițializează membrii cu valorile acelor parametri
metode publice
IsFlat, care nu primește parametri. Returnează true dacă presiunea anvelopei este mai mică de 1 și false în caz contrar
SchimbaRoata, care nu returnează nimic. Primește câte un parametru pentru fiecare membru și copiază valoarea fiecărui parametru în membrul corespunzător
UmflaRoata, care nu returnează nimic. Primește parametrul presiune de tip double și apelează metoda UmflaAnvelopa a membrului _anvelopa furnizându-i parametrul presiune.
GetTipAnvelopa, care nu primește parametri și returnează TipAnvelopa. Metoda apelează pe membrul _anvelopa getterul corespunzător.*/
