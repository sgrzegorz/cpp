#ifndef LAB5_TREE_H
#define LAB5_TREE_H
#include <iostream>
using namespace std;

class ListException{};
template<typename T>class Node;
template <typename T> class List;
template <typename T> ostream& operator<< (ostream&, List<T>&);

template<typename T>class List
{
    List(const List<T> &){}
    List<T>& operator =(List<T>&&);
    Node<T>* root;
public:
    List() : root(NULL) {}
    void insert(T val);
    void del();
    void print() const;
    friend ostream& operator<< <>(ostream&, List<T>&);
    ~List();

};

template <typename T> ostream& operator<<(ostream& os, List<T>& list){
    if (list.root == NULL) throw ListException();
    else return list.root->walk(os);
}

template<typename T> List<T>::~List(){
    Node<T>* p = this->root;
    while(p!=NULL){
        Node<T> *q = p;
        delete q;
        p = p->getNext();
    }
}


template<typename T>class Node
{
    T data;
    Node<T>* next;
public:
    Node(T _data) : data(_data), next(NULL){}
    ostream & walk(ostream &) const;
    void setNext(Node<T>*node){
        this->next = node;
    }
    void setData(T data){
        this->next = data;
    }
    Node<T> *getNext(){
        return this->next;
    }
    T getData(T data){
        return this->data;
    }
};

template<typename T> ostream & Node<T>::walk(ostream &os) const{
    if(next!=NULL) next->walk(os);
    os << " <- "<<data;
    return os;
}



#endif //LAB5_TREE_H
