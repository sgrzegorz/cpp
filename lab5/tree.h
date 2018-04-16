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
    else return tree.root->walk(os);
}
//-----------------------------------------------------------------------------------------------------//

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

//template class TreeBST<int>;
//template class TreeBST<string>




//-----------------------------------------------------------------------------------------------------//

#endif //LAB5_TREE_H
