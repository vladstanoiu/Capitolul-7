#ifndef ANVELOPA_H
#define ANVELOPA_H
#include <string>
using namespace std;

enum TipAnvelopa { iarna , vara , universal};
class Anvelopa
{
    public:
        Anvelopa();
        Anvelopa(string , float , TipAnvelopa);
        float GetPresiune() {return _presiune;}
        TipAnvelopa GetTipAnvelopa() {return _tipAnvelopa;}
        void UmflaAnvelopa(float);
        virtual ~Anvelopa();

    protected:

    private:
       string _brand;
       float _presiune;
       TipAnvelopa _tipAnvelopa;
};

#endif // ANVELOPA_H

/*membri:
_brand de tip string
_presiune
_tipAnvelopa de tip TipAnvelopa
constructori
cel default. Pune _brand pe "Michelin", _presiune pe 2.2 și _tipAnvelopa pe vara
unul care primește trei parametri, câte unul pentru fiecare membru și inițializează membrii cu valorile acelor parametri
metode publice
Getteri pentru membrii _presiune și _tipAnvelopa
UmflaAnvelopa, care nu returnează nimic și primește un parametru de tipul membrului _presiune. Dacă parametrul primit e mai mare decât 3, metoda pune _presiune pe 3. În caz contrar, metoda copiază valoarea parametrului în _presiune */
