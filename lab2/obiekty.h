//
// Created by x on 21.03.18.
//

#ifndef C_OBIEKTY_H
#define C_OBIEKTY_H
using namespace std;
#include <iostream>

class Matrix;


class Vector{
private:

public:
    float x,y;

    Vector(float x = 0, float y = 0);
    Vector();

    Vector operator- (Vector const &obj);

    void operator -= (Vector const &obj);
    Vector operator*(const Matrix &m);

    Vector operator++();

    Vector operator++ (int);
    float getVector(int i);

    friend ostream& operator<< (ostream& stream, const Vector & m);

};




class Matrix{
private:

public:
    float xx,xy,yx,yy;
    Matrix(float xx = 0, float xy = 0,float yx = 0,float yy = 0);

    Matrix operator-();

    Matrix operator==(const Matrix &m);

    operator float ();

    friend Matrix operator*(const Matrix &m,float f);
    friend Matrix operator*(float f,const Matrix &m);
    friend ostream& operator<< (ostream& stream, const Matrix & m);
    friend Vector operator+(const Matrix &m, const Vector &p);
    friend Vector operator+( const Vector &p,const Matrix &m );

};




#endif //C_OBIEKTY_H
