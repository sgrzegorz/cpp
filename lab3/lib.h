//
// Created by x on 26.03.18.
//

#ifndef LAB3_LIB_H
#define LAB3_LIB_H

#include <iostream>
#include <cstring>

using namespace std;

class Piksel{
private:
    int x;
    int y;
public:

    Piksel(int x=0, int y=0);
    Piksel& operator=(const Piksel &obj);
    int getX() const;
    int getY() const;
};

class Poligon{
private:
    int size,number;
    Piksel **element;
public:

    Poligon(int size = 10);
    ~Poligon();



    //when obj doesn't exist
    Poligon(const Poligon &obj); //copy constructor
    Poligon(Poligon &&obj);//move constructor

    //when obj already exists
    Poligon & operator=(const Poligon &obj); //copy assignment
    Poligon & operator=(Poligon && obj);//move assignment

    int getSize()const;
    int getNumber()const;
    bool add(const Piksel &obj);

    friend ostream& operator<< (ostream& stream, const Poligon & g);

};




#endif //LAB3_LIB_H
