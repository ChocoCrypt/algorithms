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
