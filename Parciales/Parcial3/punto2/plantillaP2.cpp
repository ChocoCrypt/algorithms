#ifdef bst_hpp


// IMPLEMENTE ACA EL PUNTO 2


// IMPLEMENTE ACA EL PUNTO 2
template<typename keyType>
bool bst<keyType>::check_if_bst(bstNode *root)const{
    if(root->left == nullptr && root->right == nullptr){
        return true;
    }
    //si el nodo solamente tiene un hijo no importa
    else if(root->left !=nullptr && root-> right == nullptr){
        check_if_bst(root->left);
    }
    else if(root->left == nullptr && root->right != nullptr){
        check_if_bst(root->right);
    }
    //si el nodo tiene 2 hijos, hay que ver que el de la izquierda sea menor que el y el de la derecha mayor
    //pero hay un caso analogo, y es que los de la derecha sean menores que el nodo y los de la izquierda sean mayores que el nodo, tambien seria un arbol en el cual la busqueda de un elemento sea O(ln(n))
    //por cuestiones de definicion voy a dejar el metodo asi.
    else if(root->left != nullptr  && root->right != nullptr){
        //un arbol es un arbol de busqueda binaria si para todos los nodos los de la izquierda son menores y los de la derecha son mayores
        if(root->right->key < root->key ||  root->left->key > root->key){
            return false;
        }
        else{
            check_if_bst(root->left);
            check_if_bst(root->right);
        }
    }
    return true;
}


template<typename keyType>
bool bst<keyType>::check_if_bst()const{
    return check_if_bst(tree);
}
// ACA TERMINA SU IMPLEMENTACION

// ACA TERMINA SU IMPLEMENTACION


template <typename keyType>
bst<keyType>::bst() {
    tree = nullptr;
    count = 0;
}


template <typename keyType>
bst<keyType>::~bst() {
    clear();
}


template <typename keyType>
void bst<keyType>::insert(bstNode * & bush, keyType key) {
    if (bush == nullptr) {
        count++;
        bush = new bstNode;
        bush->key = key;
        bush->left = nullptr;
        bush->right = nullptr;
    } else {
        if (key != bush->key) {
            if (key < bush->key) {
                insert(bush->left, key);
            } else {
                insert(bush->right, key);
            }
        }
    }
}


template <typename keyType>
void bst<keyType>::insert(keyType key) {
    insert(tree, key);
}


template <typename keyType>
typename bst<keyType>::bstNode * bst<keyType>::find(bstNode * bush, keyType key) {
    if (bush == nullptr) return nullptr;
    if (key == bush->key) return bush;

    if (key < bush->key) {
        return find(bush->left, key);
    } else {
        return find(bush->right, key);
    }
}


template <typename keyType>
bool bst<keyType>::find(keyType key) {
    if (find(tree, key) != nullptr) {
        return true;
    } else {
        return false;
    }
}


template <typename keyType>
void bst<keyType>::display(bstNode * bush, std::ostream & out) {
    if (bush != nullptr) {
        display(bush->left, out);
        out << "key: " << bush->key << std::endl;
        display(bush->right, out);
    }
}


template <typename keyType>
void bst<keyType>::display(std::ostream & out) {
    out << "Tree " << tree << " nodes: " << count << std::endl;
    display(tree, out);
}


template <typename keyType>
void bst<keyType>::clear(bstNode * & bush) {
    if (bush != nullptr) {
        clear(bush->left);
        clear(bush->right);
        delete bush;
        count--;
    }
    bush = nullptr;
    std::cout << "Clear: nodes left " << count << " " << bush << std::endl;
}


template <typename keyType>
void bst<keyType>::clear(void) {
    if (tree != nullptr and count == 0) {
        clear(tree);
    }
}


template <typename keyType>
typename bst<keyType>::bstNode * bst<keyType>::min(bstNode *bush) {
    if (bush == nullptr) {
        return nullptr;
    } else {
        return bush->left == nullptr ? bush : min(bush->left);
    }
}


template <typename keyType>
void bst<keyType>::remove(bstNode * & bush, keyType key) {
    if (bush == nullptr) return;

    if (key < bush->key) {
        remove(bush->left, key);
    } else if (key > bush->key) {
        remove(bush->right, key);
    } else if (bush->left == nullptr) {
        bstNode *tmp = bush;
        bush = bush->right;
        delete tmp;
        count--;
    } else if (bush->right == nullptr) {
        bstNode *tmp = bush;
        bush = bush->left;
        delete tmp;
        count--;
    } else if (bush->left != nullptr && bush->right != nullptr) {
        bush->key = min(bush->right)->key;
        remove(bush->right, bush->key);
    }
}


template <typename keyType>
void bst<keyType>::remove(keyType key) {
    remove(tree, key);
}


#endif /* bst_hpp */
