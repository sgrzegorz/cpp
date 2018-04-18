#include "list.h"




template<typename T>void List<T>::insert(T val) {
    if (root == NULL) {
        root = new Node<T>(val);
        return;
    }
    Node<T> *q = root;
    root = new Node<T>(val);
    root->setNext(q);
}

template<typename T>void List<T>::del() {
    if (root == NULL) throw new ListException();
    Node<T> *q = root;
    root = root->getNext();
    delete q;
}


template class List<int>;
template class List<string>;
