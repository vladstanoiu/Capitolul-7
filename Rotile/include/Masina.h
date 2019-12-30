#ifndef MASINA_H
#define MASINA_H
#include "Roata.h"
#include <iostream>
#include <string>

using namespace std;

class Masina
{
    public:
        Masina();
        Masina( Roata , Roata , Roata , Roata);
        void AfiseazaStareRoti(string);
        void UmflaRoti (double);
        void UmflaRoata (int , float);
        void SchimbaRoti (Roata , Roata , Roata, Roata);
        void SchimbaRoata (int , Roata);
        void AfiseazaTipCauciucuri(string);
        virtual ~Masina();

    protected:

    private:
       Roata _roti[4];
       short VerificaRoti();

};

#endif // MASINA_H


/*membru
_roti, un tablou cu 4 elemente de tip Roata
constructor
unul care primește patru  parametri de tip Roata și inițializează tabloul _roti cu ele
metoda privată
VerificaRoti, care nu primește parametri și returnează short. Metoda apelează pe fiecare element Roată din tabloul _roti metoda IsFlat. Dacă găsește o roată desumflată (adică IsFlat a returnat true) returnează indicele (poziția) din tablou al acelui element. Dacă toate roțile sunt umflate metoda returnează -1.
metode publice
AfiseazaStareRoti, care nu returnează nimic. Primește un parametru de tip string reprezentând numele mașinii. Afișează acest parametru  (fără să adauge o linie nouă !). Apoi apelează metoda VerificaRoti salvând rezultatul returnat de metodă într-o variabilă locală. Dacă acea variabilă este mai mică ca 0 afișează textul " are toate rotile in regula". În caz contrar afișează textul " are pana la roata " și afișează valoare variabilei locale incrementată cu 1 (pentru că indicii în tablouri pleacă de la 0 dar roțile unei mașini se numără plecând de la 1 :) )
UmflaRoti, care nu returnează nimic. Primește parametrul presiune, de tip double. Metoda apelează pentru fiecare element din tabloul _roti metoda UmflaRoata, pasându-i parametrul presiune.
UmflaRoata, care nu returnează nimic. Primește ca parametri indicele roții de umflat și presiunea. Metoda apelează pentru elementul cu indicele primit parametru din tabloul _roti metoda UmflaRoata, pasându-i parametrul presiune.
SchimbaRoti, care nu returnează nimic. Primește patru parametri de tip Roata. Metoda copiază cei patru parametri în cele patru elemente ale tabloului _roti
SchimbaRoata, care nu returnează nimic. Primește ca parametri indicele roții de schimbat și un obiect de tip Roata). Metoda copiază în elementul cu indicele primit parametru din tabloul _roti obiectul de tip Roata primit ca parametru.
AfiseazaTipCauciucuri, care nu returnează nimic. Primește un parametru de tip string reprezentând numele mașinii. Afișează acest parametru și textul " are cauciucuri " (fără să adauge o linie nouă !). Apoi verifică tipul anvelopei fiecăreia din cele 4 roți. Dacă găsește de mai multe feluri  afișează textul " mixte". Dacă sunt toate 4 de același tip afișează textul corespunzător adică "de iarna", "de vara" sau "all season". La final metoda afișează o linie nouă la consolă*/
