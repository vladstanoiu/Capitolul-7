#include "Janta.h"

Janta::Janta() : _nrPrezoane(5) , _matJanta(aluminiu) , _diametru(14)
{

}

Janta::Janta(unsigned short prezoane , MatJanta Aluminiu , unsigned short diametru) : _nrPrezoane(prezoane), _matJanta(Aluminiu) , _diametru(diametru)
{

}

void Janta::SchimbJanta(MatJanta materialJanta , unsigned short dDiametru)
{
    _matJanta = materialJanta;
    _diametru = dDiametru;
}
Janta::~Janta()
{
    //dtor
}

/*membri
_nrPrezoane
_matJanta de tip MatJanta
_diametru
constructori
cel default. Pune _nrPrezoane pe 5, _matJanta pe aluminiu și _diametru pe 14
unul care primește trei parametri, câte unul pentru fiecare membru și inițializează membrii cu valorile acelor parametri
metoda publică
SchimbaJanta, care nu returnează nimic și primește doi parametri, de tip MatJanta respectiv de tipul membrului _diametru. Metoda modifică valoarea membrilor _matJanta și _diametru folosind parametrii primiți */

