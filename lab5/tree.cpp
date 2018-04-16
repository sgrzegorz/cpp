#include "tree.h"
#include <iostream>
template <typename T> class NodeBST;
template <typename T> ostream& operator<< (ostream&, NodeBST<T>&);
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
    friend ostream& operator<< <> (ostream&, NodeBST<T>&);
};

template <typename T> ostream& operator<< (ostream& os, NodeBST<T>&tree){
    if (left != NULL) os<<tree.left;
    os<<tree.data;
    if (right != NULL) os<<tree.right;
}


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

template class TreeBST<int>;
template class TreeBST<string>;