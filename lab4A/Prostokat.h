#ifndef LAB4A_PROSTOKAT_H
#define LAB4A_PROSTOKAT_H
#include "Figura.h"

namespace fig {


    class Prostokat : public Figura {
        //double b;
    protected:
        double a,b;
    public:
        Prostokat(std::string etykieta, const Punkt &srodek, int a, int b);

        virtual ~Prostokat();

        virtual std::string opis() const;

        virtual double pole() const{
            return a * b;
        }

        virtual bool zapisz(std::ostream &os) const;

        virtual bool wczytaj(std::istream &is);
    };
}

#endif //LAB4A_PROSTOKAT_H
