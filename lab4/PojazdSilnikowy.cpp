#include "PojazdSilnikowy.h"

PojazdSilnikowy::PojazdSilnikowy(const Osoba &wlasciciel, int przebieg,float pojemnosc,int moc_km){
    this->wlasciciel = wlasciciel;
    this->przebieg = przebieg;
    this->pojemnosc=pojemnosc;
    this->moc_km-> moc_km;

}

float PojazdSilnikowy::pobierzPojemnosc() const {
    return pojemnosc;
}

float PojazdSilnikowy::mocKW() const{
    return 1.4 * moc_km;
}