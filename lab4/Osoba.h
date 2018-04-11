#ifndef OSOBA_H
#define OSOBA_H
#include <string>
#include <iostream>

class Punkt {
public:
    Punkt(int );
    void ustawImie(const std::string& im);
    std::string pobierzImie() const;
    bool zapisz(std::ostream & os) const; /// zapisuje atrybuty do strumienia
    bool wczytaj(std::istream & is); /// wczytuje atrybuty ze strumienia
    std::string getImie();
    std::string getNazwisko();
    int getRok();

private:
    double x,y;
};

#endif // OSOBA_H