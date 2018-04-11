//
// Created by x on 10.04.18.
//

#ifndef LAB4_POJAZDSILNIKOWY_H
#define LAB4_POJAZDSILNIKOWY_H
#include "Pojazd.h"
#include "Osoba.h"


class PojazdSilnikowy : public Pojazd{
protected:
    float pojemnosc;
    int moc_km;
public:

    virtual float pobierzPojemnosc() const;
    PojazdSilnikowy(const Osoba &wlasciciel, int przebieg,float pojemnosc,int moc_km);
};


#endif //LAB4_POJAZDSILNIKOWY_H
