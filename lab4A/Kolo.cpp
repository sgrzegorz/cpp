#include "Kolo.h"
using namespace std;

Kolo::Kolo(std::string etykieta,const Punkt & srodek,double promien) : Figura(etykieta,srodek){
    this->promien = promien;
}

Kolo::~Kolo(){

}
// B(int a, int b) :A(a)
std::string Kolo::opis(){
    return etykieta;
}

double Kolo::pole(){
    return 3.14 * promien*promien;
}

bool Kolo::zapisz(ostream &os) const{
    Figura::zapisz(os);
    os << promien;
    return true;
}

bool Kolo::wczytaj(istream &is){
    Figura::wczytaj(is);
    is >> promien;
    return true;
}


