#ifndef LAB4_POJAZDOSOBOWY_H
#define LAB4_POJAZDOSOBOWY_H
#include "PojazdSilnikowy.h"
#include <string>

class PojazdOsobowy : public PojazdSilnikowy{
protected:
    std::string marka;
public:
    PojazdOsobowy(Osoba wlasciciel, int przebieg,float pojemnosc,int moc_km,std::string marka);
};


#endif //LAB4_POJAZDOSOBOWY_H
