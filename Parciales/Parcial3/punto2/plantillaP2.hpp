#ifndef bst_hpp
#define bst_hpp


#include <iostream>


template <typename keyType>
class bst {
    struct bstNode {
        keyType key;
        bstNode *left;
        bstNode *right;
    };

    size_t count;
    bstNode *tree;

    bstNode * min(bstNode *root);
    bstNode * find(bstNode *root, keyType key);
    void insert(bstNode * &root, keyType key);
    void remove(bstNode * &root, keyType key);

    void clear(bstNode * &root);
    void display(bstNode *root, std::ostream &out);

    bool check_if_bst(bstNode *root) const;

public:
    bst();
    ~bst();

    bool find(keyType key);
    void insert(keyType key);
    void remove(keyType key);

    void clear(void);
    void display(std::ostream &out = std::cout);

    bool check_if_bst() const;
};

#include "plantillaP2.cpp"

#endif /* bst_hpp */
