#ifndef LAB4A_FIGURA_H
#define LAB4A_FIGURA_H

#include "Punkt.h"


class Figura {
protected:
    Punkt srodek;
    std::string etykieta;
public:
    Figura(std::string etykieta,const Punkt & srodek)=0;
    virtual ~Figura() =0;
    Figura();
    void przesun(Punkt sr);
    virtual std::string opis() = 0;
    virtual double pole() =0;
    virtual bool zapisz(std::ostream &os) const  =0;
    virtual bool wczytaj(std::istream &is) = 0;


};


#endif //LAB4A_FIGURA_H
