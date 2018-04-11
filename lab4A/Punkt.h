#ifndef LAB4A_PUNKT_H
#define LAB4A_PUNKT_H
#include <iostream>


class Punkt {
private:
    double x,y;
public:
    void setX(double x);
    double getX();
    double getY();
    Punkt(int x,int y);
    bool zapisz(std::ostream & os) const;
    bool wczytaj(std::istream & is);
    friend std::ostream& operator<< (std::ostream& stream, const Punkt & punkt);
};


#endif //LAB4A_PUNKT_H
