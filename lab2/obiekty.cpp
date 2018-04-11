//
// Created by x on 21.03.18.
//
#include "obiekty.h"

Vector::Vector(float x , float y ){
    this -> x = x; this -> y = y;
}

Vector::Vector(){
    this -> x = 0; this -> y = 0;
}

Vector Vector::operator- (Vector const &obj){
    Vector tmp;
    tmp.x = this->x - obj.x;
    tmp.y = this->y - obj.y;
    return tmp;
}

void Vector::operator -= (Vector const &obj){
    this-> x -= obj.x;
    this-> y -= obj.y;

}
Vector Vector::operator*(const Matrix &m){
    return Vector(this->x *m.xx + this->y*m.yx, this->x*m.xy+this->y*m.yy);
}

Vector Vector::operator++(){
    this->x +=1;
    this->y +=1;
    return *this;
}

Vector Vector::operator++ (int) {
    Vector temp = *this;
    temp.x ++;
    temp.y++;
    return temp;
}

float Vector::getVector(int i){
    if(i==0) return this->x;
    if(i==1) return this->y;
    return -9999999;
}



ostream& operator<< (ostream& stream, const Vector & v){
    stream << v.x <<endl<<v.y<<endl;
    return stream;

}


Matrix::Matrix(float xx = 0, float xy = 0,float yx = 0,float yy = 0){
    this -> xx = xx; this -> xy = xy; this->yx=yx; this -> yy = yy;
}

Matrix Matrix::operator-(){
    this ->xx *=-1;
    this ->xy *=-1;
    this ->yx *=-1;
    this ->yy *=-1;
    return this*;
}


Matrix Matrix::operator==(const Matrix &m){

    if(this->xx != m.xx) return false;
    if(this->xy != m.xy) return false;
    if(this->yx != m.yx) return false;
    if(this->yy != m.yy) return false;
    return true;

}

operator Matrix::float (){
    return this->xx * this->yy - this->xy * this->yx;
}


Matrix operator*(const Matrix &m,float f){
    Matrix tmp =m;
    tmp.xx++; tmp.yy++; tmp.xy++; tmp.yx++;
    return tmp;
}
Matrix operator*(float f,const Matrix &m){
    Matrix tmp =m;
    tmp.xx++; tmp.yy++; tmp.xy++; tmp.yx++;
    return tmp;
}

ostream& operator<<(ostream& out, const Matrix &m) {
    out << endl << m.xx << m.xy << endl<< m.yx << m.yy;
    return out;
}