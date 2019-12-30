#ifndef CURSANT_H
#define CURSANT_H
#include <Persoana.h>


class Cursant : public Persoana
{
    public:
        Cursant();
        Cursant(string,string,string);
        string GetNumeComplet(){return "Cursant: " + Persoana::GetNumeComplet();}
        string Activitate() {return "studiaza " + Persoana::Activitate();}
        virtual ~Cursant();
        void SetNotaTeme (double teme) {_notaTeme = teme;}
        void SetNotaTeste (double teste) {_notaTeste = teste;}
        void SetNotaProiect (double proiect) {_notaProiect = proiect;}
        string Absolva();
    protected:

    private:
        double _notaTeme;
        double _notaTeste;
        double _notaProiect;
        bool HasGrades();
        bool IsAverageOk();
};

#endif // CURSANT_H
