template<typename T>
void List<T>::reverse(){ //como estoy un poco confundido, lo implemente con un stack
    stack<T> elemen;
    //hasta aca tengo un vector con los elementos, ahora quiero voltearlo
    Cell *cursor = back;
    while(cursor != nullptr){
    //    cout<<"agregado..."<<cursor->dat<<endl;
        elemen.push(cursor->dat);
        cursor = cursor->next;
    }
    //ahora vamos a reemplazarlos con los elementos del stack
    Cell *nuevo = back;
    while(nuevo != nullptr){
        nuevo->dat = elemen.top();
        elemen.pop();
        nuevo = nuevo->next;
    }
}
