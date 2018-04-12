#ifndef LAB4A_PROSTOKAT_H
#define LAB4A_PROSTOKAT_H

#include "Figura.h"

class Prostokat : public Figura{
    double b;
protected:
    double a;
public:
    Prostokat(std::string etykieta,const Punkt & srodek,int a, int b);
    ~Prostokat();
    std::string opis();
    double pole();
    bool zapisz(std::ostream &os) const;
    bool wczytaj(std::istream &is);
};


#endif //LAB4A_PROSTOKAT_H
