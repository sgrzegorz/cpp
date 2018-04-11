#include "Punkt.h"
using namespace std;


void Punkt::setX(double x){
    this->x = x;
}
double Punkt::getX(){
    return x;
}

double Punkt::getY(){
    return x;
}

Punkt::Punkt(int x,int y){
    this-> x =x;
    this-> y =y;
}
bool Punkt::zapisz(std::ostream & os) const{
    os << x;
    os << y;
}
bool Punkt::wczytaj(std::istream & is){
    is >> x;
    is >> y;

}

ostream& operator<< (ostream& stream, const Punkt & punkt){
    stream <<"("<< punkt.x <<","<< punkt.y<<")"<<endl;
    return stream;
}