#include "Prostokat.h"

namespace fig {
    using namespace std;
    Prostokat::Prostokat(std::string etykieta, const Punkt &srodek, int a, int b) : Figura(etykieta, srodek), a(a), b(b) {

    }

    Prostokat::~Prostokat() {
        cout << "Deleting Prostokat\n";
    }

    std::string Prostokat::opis() const{
        return Figura::opis() + " a=" + to_string(a) + " b=" + to_string(b);
    }

/*
virtual double Prostokat::pole(){
    return a * b;
}
*/

    bool Prostokat::zapisz(std::ostream &os) const {
        if(!Figura::zapisz(os))return false;
        os << a << b;
        if(os.good()) return true;
        return false;
    }

    bool Prostokat::wczytaj(std::istream &is) {
        if(!Figura::wczytaj(is)) return false;
        cout<<"a:";
        is >> a;
        cout<<"b:";
        is >> b;
        if(is.good()) return true;
        return false;
    }
}