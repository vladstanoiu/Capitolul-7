#ifndef JANTA_H
#define JANTA_H

enum MatJanta {tabla , aluminiu};

class Janta
{
    public:
        Janta();
        Janta(unsigned short, MatJanta , unsigned short);
        virtual ~Janta();
        void SchimbJanta(MatJanta , unsigned short);

    protected:

    private:
       unsigned short _nrPrezoane;
        MatJanta _matJanta;
        unsigned short _diametru;
};

#endif // JANTA_H

/*membri
_nrPrezoane
_matJanta de tip MatJanta
_diametru
constructori
cel default. Pune _nrPrezoane pe 5, _matJanta pe aluminiu și _diametru pe 14
unul care primește trei parametri, câte unul pentru fiecare membru și inițializează membrii cu valorile acelor parametri
metoda publică
SchimbaJanta, care nu returnează nimic și primește doi parametri, de tip MatJanta respectiv de tipul membrului _diametru. Metoda modifică valoarea membrilor _matJanta și _diametru folosind parametrii primiți. */
