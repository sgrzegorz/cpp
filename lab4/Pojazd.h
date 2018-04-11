#ifndef POJAZD_H
#define POJAZD_H
#include <string>
#include <iostream>
#include "Osoba.h"
//class Osoba;
class Pojazd {
public:
    Pojazd(const Osoba& wlasciciel, int przebieg);
    ~Pojazd();
    virtual std::string opis() const; /// zwraca napis z wszystkimi atrybutami (np. "wlasciciel: Jan Kowalski 1970, przebieg: 120000")
    virtual float mocKW() const;
    virtual bool zapisz(std::ostream & os) const;
    virtual bool wczytaj(std::istream & is);
protected:
    Osoba wlasciciel;
    int przebieg;
};

#endif // POJAZD_H