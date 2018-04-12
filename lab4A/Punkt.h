#ifndef LAB4A_PUNKT_H
#define LAB4A_PUNKT_H

#include <iostream>
namespace fig{


    class Punkt {
    private:
        double x,y;
    public:
        Punkt();
        Punkt(int x,int y);
        void setX(double x);
        double getX() const;
        double getY() const;
        bool zapisz(std::ostream & os) const;
        bool wczytaj(std::istream & is);
        friend std::ostream& operator<< (std::ostream& stream, const Punkt & punkt);
    };

}
#endif //LAB4A_PUNKT_H
