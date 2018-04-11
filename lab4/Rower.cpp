#include "Rower.h"

float Rower::Rower(bool _amatorski){
    amatorski = _amatorski;
}

float Rower::mocKW(){
    if(amatorski) return 0.3;
    return 0.4;
}

std::string Rower::opis() const{
    return "wlasciciel: " + wlasciciel.imie +" " + wlasciciel.nazwisko + " " + wlasciciel.wiek +" przebieg: "+ przebieg + " amatorski: " + amatorski;
}