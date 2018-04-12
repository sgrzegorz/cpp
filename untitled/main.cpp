#include <iostream>
using namespace std;
int wlasciciel;
int przebieg;

class First{

public:
    int b;
    First(int a){
        this->b =a;
    }
};

class Second{
public:
    First*p;
   Second(const First &f) : p(new First(f)){
   }
};

bool zapisz(std::ostream &os) {

        os << "ffff";

    if(os.good()) return false;

    return true;
}

int main() {

    cout<<zapisz(cout);
//
//    First a = First(1);
//    Second s = Second(First(100));
//    cout<<s.p->b;

  //  Second s = Second(First());

    /*
    Punkt p = Punkt(1,2);
    Punkt q =p;
    p.x = 133;
    cout<< q.x;
*/
    //cout<< s.p;
    return 0;
}