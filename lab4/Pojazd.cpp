#include "Pojazd.h"
#include <iostream>

Pojazd::Pojazd(const Osoba& wlasciciel, int przebieg){
    this->przebieg = przebieg;
}

std::string Pojazd::opis() const{
    return "wlasciciel: " + wlasciciel.getImie() +" " + wlasciciel.nazwisko + " " + wlasciciel.rok_ur +" przebieg: "+ przebieg;
}

float Pojazd::mocKW() const = 0;

bool Pojazd::zapisz(std::ostream & os) const{
    wlasciciel.zapisz(os);
    os << przebieg;
}

bool Pojazd::wczytaj(std::istream & is){
    wlasciciel.wczytaj(is);
    is >> przebieg;
}



