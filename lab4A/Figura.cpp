#include "Figura.h"

using namespace std;


Figura::Figura(std::string etykieta,const Punkt &srodek) : srodek(srodek){
    this->srodek = Punkt(1,2);
    this->etykieta = etykieta;
}

Figura::~Figura(){

}

void Figura::przesun(Punkt sr){
    srodek = sr;
}

std::string Figura::opis(){
    return etykieta + " ("+to_string(srodek.getX())+","+to_string(srodek.getY())+")";
}

double Figura::pole(){
    return 1;
}


bool Figura::zapisz(std::ostream &os) const{
    os << etykieta;
    srodek.zapisz(os);
    return true;
}

bool Figura::wczytaj(std::istream &is){
    is >> etykieta;
    srodek.wczytaj(is);
    return true;
}
