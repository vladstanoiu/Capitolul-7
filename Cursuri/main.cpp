#include <iostream>
#include "Cursant.h"
#include "Mentor.h"
using namespace std;

int main()
{
    Mentor theBest("Dumb" , "Dude" , "Spalarea aerului");
    cout << theBest.GetNumeComplet()<<endl;
    cout << theBest.GetPrenume() << " " << theBest.Activitate() << " " << theBest.GetMaterie() << endl;

    Cursant chuck("Chuck" ,  "Norris" , "Spalarea aerului");
    cout << chuck.GetNumeComplet() << endl;
    cout << chuck.GetPrenume() << " " << chuck.Activitate() << " " << chuck.GetMaterie() << endl;
    cout << chuck.GetPrenume() << " "<< chuck.Absolva() << endl;
    chuck.SetNotaTeme(6);
    chuck.SetNotaTeste(7);
    chuck.SetNotaProiect(6);
    cout << chuck.GetPrenume() << " "<< chuck.Absolva() << endl;

    theBest.SchimbaMentor("Dumber" , "Dude");
    theBest.SchimbaMaterie("Numaratul oilor ");
    cout << theBest.GetNumeComplet() << endl;
    cout << theBest.GetPrenume() << " " << theBest.Activitate() << " " << theBest.GetMaterie() << endl;

    Cursant obiWan("Obi Wan" , "Kenobi" , "Numaratul oilor");
    cout << obiWan.GetNumeComplet() << endl;
    cout << obiWan.GetPrenume() << " " << obiWan.Activitate() << " " << obiWan.GetMaterie() << endl;
    cout << obiWan.GetPrenume() << " " << obiWan.Absolva() << endl;
    obiWan.SetNotaTeme(10);
    obiWan.SetNotaTeste(10);
    obiWan.SetNotaProiect(10);
    cout << obiWan.GetPrenume() << " " << obiWan.Absolva() << endl;
    return 0;
}


