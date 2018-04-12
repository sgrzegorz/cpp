#ifndef LAB4A_KOLO_H
#define LAB4A_KOLO_H
#include "Figura.h"
#include "Punkt.h"
namespace fig {


    class Kolo : public Figura {
        double promien;
    public:
        Kolo(std::string etykieta, const Punkt &srodek, double promien);

        ~Kolo();

        std::string opis() const;

        double pole() const;

        bool zapisz(std::ostream &os) const;

        bool wczytaj(std::istream &is);

    };

}
#endif //LAB4A_KOLO_H
