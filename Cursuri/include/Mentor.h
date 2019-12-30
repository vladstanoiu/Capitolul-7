#ifndef MENTOR_H
#define MENTOR_H

#include <Persoana.h>


class Mentor : public Persoana
{
    public:
        Mentor();
        Mentor(string , string , string);
        string GetNumeComplet(){return "Mentor: " + Persoana::GetNumeComplet();}
        string Activitate() {return "preda " + Persoana::Activitate();}
        void SchimbaMaterie(string);
        void SchimbaMentor(string,string);

        virtual ~Mentor();

    protected:

    private:
};

#endif // MENTOR_H
