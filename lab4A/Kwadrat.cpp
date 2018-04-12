#include "Kwadrat.h"
using namespace std;

Kwadrat::Kwadrat(std::string etykieta,const Punkt &srodek,int a) : Prostokat(etykieta,srodek,a,a) {

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
    Prostokat::zapisz(os);
    return true;
}

bool Kwadrat::wczytaj(std::istream &is){
    Prostokat::wczytaj(is);
    return true;
}