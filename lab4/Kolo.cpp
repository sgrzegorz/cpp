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
        if(!Figura::zapisz(os)) return false;
        os << promien;
        if(os.good()) return true;
        return false;
    }

    bool Kolo::wczytaj(istream &is) {
        if(!Figura::wczytaj(is)) return false;
        cout<<"promien:";
        is >> promien;
        if(is.good()) return true;
        return false;
    }


}