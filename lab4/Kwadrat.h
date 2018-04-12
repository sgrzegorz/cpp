#ifndef LAB4A_KWADRAT_H
#define LAB4A_KWADRAT_H
#include "Figura.h"
#include "Prostokat.h"
namespace fig {
    class Kwadrat : public Prostokat {
    protected:
    public:
        Kwadrat(std::string etykieta, const Punkt &srodek, int a);

        ~Kwadrat();

        std::string opis() const;

        double pole() const;

        bool zapisz(std::ostream &os) const;

        bool wczytaj(std::istream &is);
    };

}
#endif //LAB4A_KWADRAT_H
