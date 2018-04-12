#include <iostream>
#include "Figura.h"
#include "Punkt.h"
#include "Kwadrat.h"
#include "Prostokat.h"
#include "Kolo.h"
using namespace std;
using namespace fig;

int main() {
    Figura * F[10];
    F[0] = new Kolo("kolo", Punkt(0,0),4);
    F[1] = new Prostokat("prost",Punkt(0,0),1,2);
    F[2] = new Kwadrat("kwa",Punkt(56,3),66);

//    Punkt p = Punkt(100,100);
//    p.setX(1);
//    cout<<p.getX()<<endl;
//    p.zapisz(cout);
//    cout<<endl;
//    p.wczytaj(cin);
//    cout<<p;
//
//    F[0]->przesun(Punkt(1,2));
//    cout<<F[0]->opis()<<endl;
//    cout<<F[0]->pole()<<endl;
//    cout<<endl;
//    F[0]->wczytaj(cin);
//    F[0]->zapisz(cout);
//
//    F[1]->przesun(Punkt(1,2));
//    cout<<F[1]->opis()<<endl;
//    cout<<F[1]->pole()<<endl;
//    cout<<endl;
//    F[1]->wczytaj(cin);
//    F[1]->zapisz(cout);

//    F[2]->przesun(Punkt(1,2));
//    cout<<F[2]->opis()<<endl;
//    cout<<F[2]->pole()<<endl;
//    cout<<endl;
    F[2]->wczytaj(cin);
    F[2]->zapisz(cout);


   // F[2] = new Kwadrat("kwa",new Punkt(5,6),7);

  //  delete F[1];

    return 0;
}