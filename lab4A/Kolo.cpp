#include "Kolo.h"

namespace fig {
    using namespace std;
    Kolo::Kolo(std::string etykieta, const Punkt &srodek, double promien) : Figura(etykieta, srodek), promien(promien) {

    }

    Kolo::~Kolo() {

    }

    std::string Kolo::opis() const {
        return Figura::opis() + " r="+to_string(promien);
    }

    double Kolo::pole() const{
        return 3.14 * promien * promien;
    }

    bool Kolo::zapisz(ostream &os) const {
        Figura::zapisz(os);
        os << promien;
        return true;
    }

    bool Kolo::wczytaj(istream &is) {
        Figura::wczytaj(is);
        cout<<"promien:";
        is >> promien;
        return true;
    }


}