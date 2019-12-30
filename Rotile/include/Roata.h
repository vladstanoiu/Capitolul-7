#ifndef ROATA_H
#define ROATA_H
#include "Janta.h"
#include "Anvelopa.h"

class Roata
{
    public:
        Roata();
        Roata(Anvelopa , Janta);
        virtual ~Roata();
        bool IsFlat();
        void SchimbaRoata (Anvelopa , Janta);
        void UmflaRoata (double);
        TipAnvelopa GetTipAnvelopa() {return _anvelopa.GetTipAnvelopa();}
    protected:

    private:
         Anvelopa _anvelopa;
         Janta _janta;

};

#endif // ROATA_H


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
