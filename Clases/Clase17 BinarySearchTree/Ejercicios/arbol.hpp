#ifndef __ARBOL_HPP_
#define __ARBOL_HPP_
#include <iostream>
using namespace std;

template<typename T>
class BST {
  private:
    struct BSTNode {
      T key;
      BSTNode *left;
      BSTNode *right;
      BSTNode *parent;
    };
    BSTNode *root;
    void insertNode(BSTNode *p, BSTNode* &t, T k);
    void destroyRecursive(BSTNode *t);
    void displayNode(BSTNode *t ,int count);
    BSTNode* findNode(BSTNode *t, T k);
    BSTNode* minimum(BSTNode *t);
    BSTNode* maximum(BSTNode *t);
    BSTNode* predecessor(BSTNode* t, T k);
    BSTNode* succesor(BSTNode* t, T k);

  public:
    BST() { root = nullptr; }
    ~BST();

    void insertNode(T k);
    void displayNode();
    BSTNode* findNode(T k);
    BSTNode* minimum();
    BSTNode* maximum();
    BSTNode* predecessor(T k);
    BSTNode* succesor(T k);
    //BSTNode* succesor();
    //void removeNode(BSTNode<T>*t, T k);
  };

template <typename T>
void BST<T>::insertNode(BSTNode *p, BSTNode* &t, T k) {
  if(t == nullptr){
    t = new BSTNode;
    t->key = k;
    t->left = t->right = nullptr;
    t->parent = p;
  }else{
    if(k != t->key){
      if(k < t->key){
        insertNode(t, t->left, k);
      }else{
        insertNode(t, t->right, k);
      }
    }
  }
}

template <typename T>
void BST<T>::destroyRecursive(BSTNode *t) {
  if(t != nullptr){
    cout << "Destroying: " << t->key << endl;
    destroyRecursive(t->left);
    destroyRecursive(t->right);
    delete t;
  }
}

template <typename T>
void BST<T>::insertNode(T k) {
  cout << "Inserting " << k << endl;
  BSTNode* x = nullptr;
  insertNode(x, root, k);
}

template <typename T>
BST<T>::~BST() {
  destroyRecursive(root);
}

template <typename T>
void BST<T>::displayNode(BSTNode *t, int count) {
  if(t != nullptr){
    count++;
    displayNode(t->left, count);
    cout << "(" << count-1 << ")" << t->key << " ";
    if(t->parent != nullptr){
      cout << "Parent: " << t->parent->key << endl;
    }else{
      cout << "Parent: " << "0" << endl;
    }
  }
}

template <typename T>
void BST<T>::displayNode() {
  displayNode(root, 0);
  cout << endl;
}

template <typename T>
typename BST<T>::BSTNode* BST<T>::findNode(BSTNode *t, T k) {
  if(t == nullptr) return nullptr;
  if(k == t->key) return t;
  if(k < t->key){
    return findNode(t->left, k);
  }else{
    return findNode(t->right, k);
  }
}

template <typename T>
typename BST<T>::BSTNode* BST<T>::findNode(T k) {
  return findNode(root, k);
}

template <typename T>
typename BST<T>::BSTNode* BST<T>::minimum(BSTNode *t) {
  while(t->left != nullptr)
    t = t->left;
  return t;
}

template <typename T>
typename BST<T>::BSTNode* BST<T>::minimum() {
  return minimum(root);
}

template <typename T>
typename BST<T>::BSTNode* BST<T>::maximum(BSTNode *t) {
  while(t->right != nullptr)
    t = t->right;
  return t;
}

template <typename T>
typename BST<T>::BSTNode* BST<T>::maximum() {
  return maximum(root);
}

template <typename T>
typename BST<T>::BSTNode* BST<T>::predecessor(BSTNode *t, T k) {
  BSTNode *m;
  BSTNode *p;
  m = findNode(k);
  p = m->parent;
  while(m->key < p->key){
    p->key = p->parent->key;
  }
  return p;
}

template <typename T>
typename BST<T>::BSTNode* BST<T>::succesor(BSTNode *t, T k) {
  BSTNode *m;
  BSTNode *p;
  m = findNode(k);
  p = m->parent;
  while(m->key > p->key){
    p->key = p->parent->key;
  }
  return p;
}

template <typename T>
typename BST<T>::BSTNode* BST<T>::predecessor(T k) {
  return predecessor(root, k);
}

template <typename T>
typename BST<T>::BSTNode* BST<T>::succesor(T k) {
  return succesor(root, k);
}



#endif
