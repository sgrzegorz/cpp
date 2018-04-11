//
// Created by x on 10.04.18.
//

#include "Osoba.h"

Osoba::Osoba(const std::string& _imie, const std::string& _nazwisko, int _rok_ur){
    imie = _imie;
    nazwisko = _nazwisko;
    rok_ur = _rok_ur;
}
void Osoba::ustawImie(const std::string& im){
    imie=im;
}

std::string Osoba::pobierzImie()const{
    return imie;
}


bool Osoba::zapisz(std::ostream & os) const{
    os <<imie;
    os << nazwisko;
    os << rok_ur;
}

bool Osoba::wczytaj(std::istream & is){
    is >> imie;
    is >> nazwisko;
    is >> rok_ur;
}

std::string Osoba::getImie(){
    return imie;
}
std::string Osoba::getNazwisko(){
    return nazwisko;
}
int Osoba::getRok(){
    return rok_ur;
}