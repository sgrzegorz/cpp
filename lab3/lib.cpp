#include "lib.h"

Piksel ::Piksel(int x, int y){
    this->x = x;
    this->y = y;

}

Piksel& Piksel::operator=(const Piksel &obj){
    x=obj.x;
    y =obj.y;
    return *this;
}

int Piksel::getX()const{
    return x;
}

int Piksel::getY() const {
    return x;
}

Poligon::Poligon(int size) {
    if(size<=0) throw string ("Size can't be <0");
    this->element = new Piksel*[size];
    this->size = size;
    for(int i=0;i<size;i++){
        element[i]=NULL;
    }
}

Poligon::~Poligon(){
    for(int i=0;i<size;i++){
        delete(element[i]);
    }
    delete [] element;
}
//--------------------------------------------------------------------------------------------------------------------
//create new object and do operations on it
Poligon::Poligon(const Poligon &obj){ //copy constructor
    size=obj.size;
    number =obj.number;
    element = new Piksel*[size];
    for(int i=0;i<size;i++){
        if(obj.element[i]) element[i] = new Piksel(*obj.element[i]);



    }

}

Poligon ::Poligon(Poligon &&obj) : size(obj.size), element(obj.element) ,number(obj.number) { //move constructor
    obj.element=NULL;
    obj.size=0;
    obj.number=0;
    obj.number=0;
}

//change a state of already existing object
Poligon & Poligon::operator=(const Poligon &obj){ //copy assignment
    for(int i=0;i<size;i++){
        delete element[i];
    }
    delete[]element;

    size = obj.size;
    number=obj.number;
    element = new Piksel* [size];
    for(int i=0;i<size;i++){
        if(obj.element[i]){
            if(obj.element[i]) element[i] = new Piksel(*obj.element[i]);
        }

    }
}



Poligon & Poligon::operator=(Poligon && obj){ //move assignment
    for(int i=0;i<size;i++){
        delete element[i];
    }
    delete []element;

    element = obj.element;
    size = obj.size;
    number=obj.number;
    obj.element = NULL;

}
//--------------------------------------------------------------------------------------------------------------------
int Poligon::getSize()const{
    return this->size;
}

int Poligon::getNumber()const{
    return number;
}

bool Poligon::add(const Piksel &obj){

    for(int i=0;i<size;i++){
        if(element[i]==NULL){
             element[i] = new Piksel(obj);

            //(*element[i]) =  obj;
            number++;
            return true;
        }
    }
    throw overflow_error("An array is full, can't add more elements");
    return false;
}

ostream& operator<< (ostream& stream, const Poligon & g){
    stream<<"{";
    for(int i=0;i<g.size;i++){
        if(g.element[i]){
            stream<<g.element[i]->getX();
        }else{
            stream<<"0";
        }
        if(i!=g.size-1) stream<<",";
    }
    stream<<"}\n";
    return stream;

}