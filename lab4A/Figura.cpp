#include "Figura.h"

using namespace std;


Figura::Figura(std::string etykieta,const Punkt &srodek){
    this->srodek = Punkt(1,2);
    this->etykieta = etykieta;
}

void Figura::przesun(Punkt sr){
    srodek = sr;
}

std::string Figura::opis(){
    return etykieta + " ("+to_string(srodek.getX())+","+to_string(srodek.getY())+")";
}


bool Figura::zapisz(std::ostream &os) const{
    os << etykieta;
    srodek.zapisz(os);
}

bool Figura::wczytaj(std::istream is){
    is >> etykieta;
    srodek.wczytaj(is);
}
