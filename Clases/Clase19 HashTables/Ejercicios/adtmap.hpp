#ifndef _adtmap_hpp_
#define _adtmap_hpp_
#include <stdexcept>
using namespace std;
template <typename KT , typename VT>
class Mymap {
private:
    int initialcapacity = 10 ;
    struct KeyValuePair{
        KT key ;
        VT value;
    };
    KeyValuePair *array ;
    int capacity;
    int count;

    void expandcapacity();
    int findkey(KT key);



public:
    Mymap();
    ~Mymap();
     bool empty();
     void clear();
     void insert(KT key , VT value);
     VT get(KT key);
     bool containsKey(KT key);//
     void remove(KT key);//check

};
template<typename KT, typename VT>
Mymap :: Mymap<KT,VT>(){

    count  = 0 ;
    capacity = initialcapacity;
    array = new KeyValuePair[capacity];
}

template<typename KT, typename VT>
bool Mymap<KT,VT> :: empty(){
    delete[] array;
}

template <typename KT, typename VT>
void Mymap<KT,VT> :: clear(){
    count =0;
}

template<typename KT, typename VT>
void Mymap<KT,VT> :: insert(KT key , VT value){
    int index = findkey(key);
    if (index == -1){
        if(count == capacity )expandcapacity();
        index = count++;
        array[index].key = key;
    }
    array[index].value = value;
}

template<typename KT, typename VT>
void Mymap<KT,VT> :: remove(KT key){
    int index = findkey(key);
    if(index == -1){
        throw runtime_error("removiendo un valor que no existe\n ");
    }
    for(int i  = index ; i< count-1 ; i++){
        array[i].key  = array[i+1].key;
        array[i].value = array[i+1].value;
    }
    count --;
}
template<typename KT, typename VT>
bool Mymap<KT,VT> :: containsKey(KT key){
    for(int i = 0 ; i<count ; i++){
        if(array[i].key == key){
            return true;
        }
    }
    return false;

}



#endif
