#include "Punkt.h"

namespace fig {
    using namespace std;

    Punkt::Punkt() {}

    void Punkt::setX(double x) {
        this->x = x;
    }

    double Punkt::getX() const{
        return x;
    }

    double Punkt::getY() const {
        return y;
    }

    Punkt::Punkt(int x, int y) {
        this->x = x;
        this->y = y;
    }

    bool Punkt::zapisz(std::ostream &os) const {
        os << x;
        os << y;
    }

    bool Punkt::wczytaj(std::istream &is) {
        cout<<"x punktu:";
        is >> x;
        cout<<"y punktu:";
        is >> y;

    }
    ostream& operator<< (std::ostream& stream, const Punkt & punkt){
        stream << "(" << punkt.x << "," << punkt.y << ")" << endl;
        return stream;
    }


}