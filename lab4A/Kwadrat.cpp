#include "Kwadrat.h"

namespace fig {
    using namespace std;
    Kwadrat::Kwadrat(std::string etykieta, const Punkt &srodek, int a) : Prostokat(etykieta, srodek,a,a)  {

    }

    Kwadrat::~Kwadrat() {
        cout << "Deleting Kwadrat\n";
    }

    std::string Kwadrat::opis() const{
        return Figura::opis() + " a:" + to_string(a);
    }

    double Kwadrat::pole() const{
        return a * a;
    }


    bool Kwadrat::zapisz(std::ostream &os) const {
        Figura::zapisz(os);
        os << a;
        return true;
    }

    bool Kwadrat::wczytaj(std::istream &is) {
        Figura::wczytaj(is);
        cout<<"a:";
        is >> this->a;
        return true;
    }
}