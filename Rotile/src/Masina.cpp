#include "Masina.h"

Masina::Masina()
{
}

Masina::Masina(Roata roata1, Roata roata2, Roata roata3, Roata roata4) : _roti{roata1, roata2, roata3, roata4}
{

}

short Masina::VerificaRoti()
{
    if(_roti[0].IsFlat()) { return 0;}
    if(_roti[1].IsFlat()) { return 1;}
    if(_roti[2].IsFlat()) { return 2;}
    if(_roti[3].IsFlat()) { return 3;}
    return -1;
}

void Masina::AfiseazaStareRoti(string numeMasina)
{
    cout << numeMasina;
    int rezultat = VerificaRoti();
    if (rezultat < 0)
    {
        cout << " are toate rotile in regula ";
    }
    else
    {
        cout << " are pana la roata " ;
        cout << ++rezultat;
    }
    cout << endl;

}

void Masina::UmflaRoti (double presiune)
{
    _roti[0].UmflaRoata(presiune);
    _roti[1].UmflaRoata(presiune);
    _roti[2].UmflaRoata(presiune);
    _roti[3].UmflaRoata(presiune);

}

void Masina::UmflaRoata(int indice, float presiune)
{
    _roti[indice].UmflaRoata(presiune);
}

void Masina::SchimbaRoti(Roata par1, Roata par2, Roata par3, Roata par4)
{
    _roti[0] = par1;
    _roti[1] = par2;
    _roti[2] = par3;
    _roti[3] = par4;
}

void Masina::SchimbaRoata(int indiceRoata, Roata parametru)
{
    _roti[indiceRoata] = parametru;
}

void Masina::AfiseazaTipCauciucuri(string numeMasina)
{
    cout << numeMasina << " are cauciucuri ";
    bool temp = true;
    for (int i = 0; i < 3 ; i++)
    {
        if(_roti[i].GetTipAnvelopa() != _roti[i+1].GetTipAnvelopa()) {
            temp = false;
        };

    }

    if(temp == true) {
            int anvelopa = _roti[0].GetTipAnvelopa();
        switch (anvelopa)
        {
            case 0 : cout << "de iarna. "; break;
            case 1 : cout << "de vara. " ; break;
            case 2 : cout << "all season. "; break;
            default : cout << "n/a";
        }

    } else {
        cout << "mixte";
    }
    cout << endl;
}


Masina::~Masina()
{
    //dtor
}

/*Masina( Roata , Roata , Roata , Roata);
        void AfiseazaStareRoti(string);
        void UmflaRoata (Roata[] , float);
        void SchimbaRoti (Roata , Roata , Roata, Roata);
        void SchimbaRoata (Roata[] , Roata);
        void AfiseazaTipCauciucuri(string);
/*
AfiseazaTipCauciucuri, care nu returnează nimic. Primește un parametru de tip string reprezentând numele mașinii. Afișează acest parametru și textul " are cauciucuri " (fără să adauge o linie nouă !). Apoi verifică tipul anvelopei fiecăreia
 din cele 4 roți. Dacă găsește de mai multe feluri  afișează textul " mixte". Dacă sunt toate 4 de același tip afișează textul corespunzător adică "de iarna", "de vara" sau "all season".
  La final metoda afișează o linie nouă la consolă*/
