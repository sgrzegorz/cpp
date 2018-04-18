#ifndef LAB5_TREE_H
#define LAB5_TREE_H
#include <iostream>
using namespace std;
class TreeException{};
template<typename T>class NodeBST;
template <typename T> class TreeBST;

template <typename T> ostream& operator<< (ostream&, TreeBST<T>&);

template<typename T>class TreeBST
{
    TreeBST(const TreeBST<T> &){}
    TreeBST<T>& operator =(TreeBST<T>&&);
    NodeBST<T>* root;
public:
    TreeBST() : root(NULL) {}
    bool contains(T val) const;
    bool insert(T val);
    void print() const;
    friend ostream& operator<< <>(ostream&, TreeBST<T>&);
};


template <typename T> ostream& operator<<(ostream& os, TreeBST<T>& tree){
    if (tree.root == NULL) throw TreeException();
    else return tree.root->walk(os);
}





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
    ostream & walk(ostream &) const;
};

template<typename T> ostream & NodeBST<T>::walk(ostream &os) const{
    if(left!=NULL) left->walk(os);
    os << data;
    if(right!=NULL) right->walk(os);
    return os;

}




//-----------------------------------------------------------------------------------------------------//

#endif //LAB5_TREE_H
