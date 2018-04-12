#ifndef LAB4A_KWADRAT_H
#define LAB4A_KWADRAT_H
#include "Figura.h"
#include "Prostokat.h"

class Kwadrat : public Prostokat{
protected:
    double a;
public:
    Kwadrat(std::string etykieta,const Punkt &srodek,int a);
    ~Kwadrat();
    std::string opis();
    double pole();
    bool zapisz(std::ostream &os) const;
    bool wczytaj(std::istream &is);
};


#endif //LAB4A_KWADRAT_H
