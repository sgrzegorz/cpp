#include <iostream>
#include "lib.h"
using namespace std;



int main() {

    Piksel p1(1);
    Piksel p2 = Piksel(2);
    Piksel p3 = Piksel(3);
    Piksel p4 = Piksel(4);
    Piksel p5 = Piksel(5);

    {
        cout<<"\ncopy constructor"<<endl;
        Poligon A;
        A.add(p1);
        A.add(p2);
        cout<<A;
        cout<<"---\n";
        Poligon B = A;
        cout<<A<<B;
    }



    {
        cout<<"\nmove constructor"<<endl;
        Poligon A;
        A.add(p1);
        A.add(p2);
        cout<<A;
        cout<<"---\n";
//        Poligon B  = move(A);
//        cout<<A<<B;

    }

    {
        cout<<"\ncopy assignement"<<endl;
        Poligon A;
        A.add(p1);
        A.add(p2);
        Poligon B;
        B.add(p3);
        B.add(p4);
        cout<<A<<B;
        cout<<"---\n";
        B =A;
        B.add(p4);
        cout<<A<<B;

    }



    {

        cout<<"\nmove assinment"<<endl;
        Poligon A;
        A.add(p1);
        A.add(p2);
        Poligon B;
        B.add(p2);
        B.add(p3);
        cout<<A<<B;
        cout<<"---\n";

//        B = move(A);
//        A.add(p5);
//        cout<<A<<B;
    }

    try{
        Poligon A(10);
        for(int i=0;i<100;i++){
            A.add(p1);
        }
    }catch(overflow_error e){
        cout<<"error occured";
    }



    return 0;
}