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
        if(!Figura::zapisz(os)) return false;
        os << a;
        if(os.good()) return true;
        return false;
    }

    bool Kwadrat::wczytaj(std::istream &is) {
        if(!Figura::wczytaj(is)) return false;
        cout<<"a:";
        is >> this->a;
        if(is.good()) return true;
        return false;
    }
}