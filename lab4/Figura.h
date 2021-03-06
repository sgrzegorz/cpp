#ifndef LAB4A_FIGURA_H
#define LAB4A_FIGURA_H

#include "Punkt.h"
namespace fig {

    class Figura {
    protected:
        Punkt *srodek;
        std::string etykieta;
    public:
        Figura(std::string etykieta, const Punkt &srodek);

        virtual ~Figura();

        Figura();

        void przesun(Punkt sr);

        virtual std::string opis() const;

        virtual double pole() const =0;

        virtual bool zapisz(std::ostream &os) const;

        virtual bool wczytaj(std::istream &is);


    };

}
#endif //LAB4A_FIGURA_H
