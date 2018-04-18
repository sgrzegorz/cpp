#include <iostream>
#include <cstring>
#include "list.h"
using namespace std;


template<typename L> L suma(L a ,L b){
    return a + b ;
}

const char* suma(const char * a, const char * b){
    char *buff = new char [strlen(a) + strlen(b) +1];
    strcpy(buff,a);
    strcat(buff,b);
    return buff;
}

int main() {
    const char *a = "Ala";
    const char *b="Ala";
    cout<<suma(a,b)<<endl;
    cout<<suma(1,2)<<endl;

    List<int> L;

    try{
        L.del();
    }catch(...){
        cout<<"Exception occured\n";
    }
    try{
        cout<<L;
    }catch(...){
        cout<<"Exception occured\n";
    }

    L.insert(3);
    L.insert(2);
    L.insert(1);


    cout<<L<<endl;
    L.del();
    cout<<L<<endl;


    List<string> S;
    S.insert("5S");
    S.insert("4S");
    S.insert("3S");
    S.insert("2S");
    S.insert("1S");

    cout<<S<<endl;
    S.del();
    cout<<S<<endl;
}


