#ifndef LAB5_TREE_H
#define LAB5_TREE_H
#include <iostream>
using namespace std;
class TreeException;
template<typename T>class NodeBST;
template <typename T> class TreeBST;
template <typename T> ostream& operator<< (ostream&, TreeBST<T>&);//!!!!!!!!!!!!!!!!!!!!!!!!

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
    friend ostream& operator<< <>(ostream&, TreeBST<T>&);
};

template <typename T> ostream& operator<<(ostream& os, TreeBST<T>& tree){
    if (tree.root == NULL) cout << "empty" << endl;
    else os<<tree.root;
    return os;
}


#endif //LAB5_TREE_H
