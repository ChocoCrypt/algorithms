#ifndef _VECTOR_HPP
#define _VECTOR_HPP
#include <iostream>
using namespace std;


class Vector{
private:
    int capacity = 10;
    int *ptr ;
    int count;
public:
    int * deepcopy(int * &n){
        int *k =  new int[capacity];
        for(int i = 0 ; i<capacity ; i++){
            k[i] = ptr[i];
        }
    }
    void expandcapacity(){
        capacity = capacity*2;
        deepcopy(ptr);
    }
    Vector(){
        count = 0 ;
        ptr =  nullptr ;
    }
    ~Vector(){
        clear();
        delete(ptr);
    }
    bool empty(){
        if(count == 0){
            return true;
        }
        else{
            return false;
        }
    }
    void clear(){
        for(int i = 0  ; i<= count; i){
            delete(&ptr[i]);
        }
    }
    void push_back(int k){
        if (count == capacity){
    //        expandcapacity();
        }
        else{
            count++ ;
            ptr[count] = k;
        }
    }
    void imprimir(Vector a){
        for(int i = 0 ; i<=count ; i++){
        cout<<a.ptr[i]<<endl;
    }
    }


};





#endif
