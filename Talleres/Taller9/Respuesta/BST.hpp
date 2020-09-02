#ifndef _BST_HPP_
#define _BST_HPP_
#include <iostream>
using namespace std;

template<typename keytype>
class BST{
    struct BSTNode{
            keytype key;
            BSTNode *left;
            BSTNode *right;
            BSTNode *parent;
    };

    size_t  count;
    BSTNode *root;

    BSTNode *min (BSTNode *root)const{
        while(root-> left !=  nullptr){
            root = root->left;
        }
        return root;
    }
    BSTNode *max (BSTNode *root)const;
    BSTNode *succesor(BSTNode *root)const{
        if(root->parent == nullptr && root->right == nullptr){
            return nullptr;
        }
        if(root->right == nullptr){
            while(root-> parent > root->key){
                root = root->parent;
            }
            return root;
        }
        else{
            return(min(root->right));
        }
    }
    BSTNode *predecessor(BSTNode *root){
        if(root->parent == nullptr && root->left == nullptr){
            return nullptr;
        }
        if(root->left == nullptr){
            while(root->parent < root->key){
                root = root->parent;
            }
            return root;
        }
        else{
            return(min(root->left));
        }
    }

    void remove(BSTNode * &root , keytype key);
    BSTNode *copy(BSTNode *root)const;
    void clear(BSTNode *&root);
//    void display( BSTNode *root);
    void insert(BSTNode * &root , keytype key){//preguntarselo a carlos
        if(root = nullptr){
            root = new BSTNode;
            root->key = key;
            root->left = root->right = nullptr;
            root->parent = root;
            cout<<"inserting..."<<root->key<<endl;
        }
        else{
            if(key != root->key){
                //mayor que el root
                if(key>root->key){
                    insert(root->right , key);
                }
                else{
                    insert(root->left ,key);
                }
            }
        }

    }
    BSTNode *find(BSTNode *root , keytype key){
        if(root->left == nullptr && root->right == nullptr  && root->key != key ){
            cout<<"no esta el elemento "<<endl;
            return nullptr;
        }

        if(root->key == key){
            return root;
        }
        else{
            if(key<root->key){
                find(root->left->key);
            }
            else{
                find(root->right->key);
            }
        }
    }


public:
    BST(){
        root = nullptr;
    }
    bool empty(){
        if(root == nullptr){
            return true;
        }
        else{
            return false;
        }
    }
    void clear();
    bool find(keytype key)const{

    }
    void insert(keytype key){
        insert(root, key);
    }
//    void display(BSTNode *root);


};







#endif
