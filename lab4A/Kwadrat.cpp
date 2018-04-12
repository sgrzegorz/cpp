#include "Kwadrat.h"
using namespace std;

Kwadrat::Kwadrat(std::string etykieta,const Punkt &srodek,int a) : Figura(etykieta,srodek),a(a) {

}

Kwadrat::~Kwadrat(){

}

std::string Kwadrat::opis(){
    return Figura::opis()+"a: " + to_string(a);
}

double Kwadrat::pole(){
    return a * a;
}


bool Kwadrat::zapisz(std::ostream &os) const{
    Figura::zapisz(os);
    os << a;
    return true;
}

bool Prostokat::wczytaj(std::istream &is){
    Figura::wczytaj(is);
    is >> a;
    return true;
}