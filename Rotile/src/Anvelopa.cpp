#include "Anvelopa.h"
#include <iostream>


Anvelopa::Anvelopa(): _brand("Michelin") , _presiune(2.2) , _tipAnvelopa(vara)
{

}

Anvelopa::Anvelopa(string brand , float presiune , TipAnvelopa anotimp) : _brand(brand) , _presiune(presiune) , _tipAnvelopa(anotimp)
{

}

void Anvelopa::UmflaAnvelopa(float presiune)
{
    if (presiune > 3){_presiune = 3;}
            else
            {
                _presiune = presiune;
            }
}
Anvelopa::~Anvelopa()
{
    //dtor
}

/*membri:
_brand de tip string
_presiune
_tipAnvelopa de tip TipAnvelopa
constructori
cel default. Pune _brand pe "Michelin", _presiune pe 2.2 și _tipAnvelopa pe vara
unul care primește trei parametri, câte unul pentru fiecare membru și inițializează membrii cu valorile acelor parametri
metode publice
Getteri pentru membrii _presiune și _tipAnvelopa
UmflaAnvelopa, care nu returnează nimic și primește un parametru de tipul membrului _presiune. Dacă parametrul primit e mai mare decât 3, metoda pune _presiune pe 3. În caz contrar, metoda copiază valoarea parametrului în _presiune*/
