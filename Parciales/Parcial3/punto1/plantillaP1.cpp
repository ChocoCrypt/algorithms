#ifdef _LIST_HPP


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

template <typename T>
List<T>::List() {
    back = nullptr;
    count = 0;
}


template <typename T>
List<T>::~List() {
    while(!empty())
        pop();
}


template <typename T>
bool List<T>::empty() {
    return back == nullptr;
}


template <typename T>
int List<T>::size() {
    return count;
}


template <typename T>
void List<T>::push(T val) {
    Cell *newcell = new Cell;
    newcell->dat = val;
    newcell->next = back;
    back = newcell;
    count++;
}


template <typename T>
void List<T>::pop() {
    if(empty())
        throw runtime_error("pop: Attempting to pop from empty list\n");
    Cell *last = back;
    back = last->next;
    delete last;
    count--;
}


template <typename T>
void List<T>::display() {
    Cell *cursor = back;
    while(cursor != nullptr){
        cout << cursor->dat << "->";
        cursor = cursor->next;
    }
    cout << "null\n";
}

/*
 * Implemente reverse() aquí
 */

#endif
