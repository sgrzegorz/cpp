#include <iostream>
#include <cstring>
#include "tree.h"
using namespace std;



int main() {
    TreeBST<int> T;
    T.insert(1);
    T.insert(-991);
    T.insert(1111);
    T.print();

    TreeBST<string> S;
    S.insert("1");
    S.insert("ff");
    S.insert("fafa");
    S.insert("1");
    S.insert("KKKGKF");
    S.insert("5");
    S.insert("98kkkkkkkk");
    S.insert("98");
    S.print();
    cout<<endl;
    cout<<S;
}

/*
template<typename T> bool rowne(T a ,T b, T c){
    return a == b == c;
}

template<typename T> bool rowne(const char *a, const char*b, const char*c){
    if(strlen(a)!=strlen(b) || strlen(a)!=strlen(c)) return false;
    for(int i=0;i<strlen(a),i<strlen(b),i<strlen(c);i++){
        if(a[i] != b[i] || a[i]!= c[i]) return false;
    }
    return true;
}
*/
