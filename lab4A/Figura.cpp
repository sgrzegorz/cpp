#include "Figura.h"
namespace fig {
    using namespace std;
    Figura::Figura(std::string etykieta, const Punkt &srodek) : etykieta(etykieta), srodek(new Punkt(srodek)) {
    }

    Figura::Figura() {
    }


    Figura::~Figura() {
        delete this->srodek;
        cout << "Deleting Figura\n";
    }

    void Figura::przesun(Punkt sr) {
        *srodek = sr;
    }

    std::string Figura::opis() const{
        return etykieta + " (" + to_string(srodek->getX()) + "," + to_string(srodek->getY()) + ")";
    }

/*
double Figura::pole(){
    return 1;
}
*/

    bool Figura::zapisz(std::ostream &os) const {
        os << etykieta;
        srodek->zapisz(os);
        return true;
    }

    bool Figura::wczytaj(std::istream &is) {
        cout<<"etykieta:";
        is >> etykieta;
        srodek->wczytaj(is);
        return true;
    }


}