#include "tree.h"







//---------------------


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
    if (root == NULL) throw TreeException();
    else root->print();
    cout << "]" << endl;
}

template<typename T> bool TreeBST<T>::contains(T val) const {
    return (root != NULL) ? root->contains(val) : false;
}


template class TreeBST<int>;
template class TreeBST<string>;
