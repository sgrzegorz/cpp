#include <iostream>
#include <cstring>
using namespace std;

class TreeException;

template<typename T>class NodeBST
{
    NodeBST(const NodeBST<T> &){}
    NodeBST<T>& operator =(NodeBST<T>&&);
    T data;
    NodeBST<T>* left;
    NodeBST<T>* right;
public:
    NodeBST(T _data) : data(_data), left(NULL), right(NULL) {}
    bool contains(T val) const;
    bool insert(T val);
    void print() const;
};

template<typename T> bool NodeBST<T>::contains(T val) const {
    if (val == data) return true;
    NodeBST* next = (val < data) ? left : right;
    return (next != NULL) ? next->contains(val) : false;
}

template<typename T>bool NodeBST<T>::insert(T val) {
    if (val == data) return false;
    NodeBST* & next = (val < data) ? left : right;
    if (next == NULL) {
        next = new NodeBST(val);
        return true;
    }
    else return next->insert(val);
}

template<typename T>void NodeBST<T>::print() const {
    if (left != NULL) left->print();
    cout << data << " ";
    if (right != NULL) right->print();
}

template<typename T>class TreeBST
{
    TreeBST(const TreeBST<T> &){}
    TreeBST<T>& operator =(TreeBST<T>&&);

    NodeBST<T>* root;
public:
    TreeBST() : root(NULL) {}
    bool contains(T val) const { return (root != NULL) ? root->contains(val) : false; }
    bool insert(T val);
    void print() const;
};

template<typename T>bool TreeBST<T>::insert(T val) {
    if (root == NULL) {
        root = new NodeBST<T>(val);
        return true;
    }
    else return root->insert(val);
}

template<typename T>void TreeBST<T>::print() const {
    cout << "tree: [";
    if (root == NULL) cout << "empty" << endl;
    else root->print();
    cout << "]" << endl;
}



int main() {
    TreeBST<int> T;
    T.insert(1);
    T.insert(-991);
    T.insert(1111);
    T.print();

    TreeBST<string> S;
    S.insert("aaa");
    S.insert("ff");
    S.insert("fafa");
    S.insert(1);
    S.insert("KKKGKF");
    S.insert("5");
    S.insert("98kkkkkkkk");
    S.insert("98");
    S.print();
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
