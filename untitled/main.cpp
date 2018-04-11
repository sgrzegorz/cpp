#include <iostream>
using namespace std;
int wlasciciel;
int przebieg;

void zapisz(istream & is) {
    is  >>wlasciciel;
    is >>przebieg;
}

void wczytaj(ostream & os) {
    os << wlasciciel;
    os << przebieg;
}

class Punkt{
public:
    int x, y;

    Punkt(int x,int y){
        this->x =x;
        this->y =y;
    }

};

int main() {

    zapisz(cin);
    wczytaj(cout);
    /*
    Punkt p = Punkt(1,2);
    Punkt q =p;
    p.x = 133;
    cout<< q.x;
*/

    return 0;
}