#ifndef _QUEUE_HPP
#define _QUEUE_HPP
#include <iostream>
using namespace std ;

template <typename T>
class queue{
private:
    int initial_capacity = 10 ;
    void expandcapacity(){
        initial_capacity = initial_capacity *2 ;
    }
    struct Cell{
        T data ;
        Cell *link ;
    };
    Cell *queue ;
    int count;
public:
    queue(){
        count  = 0 ;
        queue = nullptr ;
    }
    ~queue(){
        clear();
        delete queue ;
    }
    int size(){
        return count ;
    }
    void clear(){
        while(!empty()){
            dequeue();
        }
    }
    void enque(T &ch){
        if(empty()){
            Cell nueva = new Cell ;
            nueva -> data = ch ;
            nueva -> link = nullptr ;
        }
        else{
        //me falta esto
        }
    T dequeue(){
    //me falta esto
    }
    T peek(){
        return queue->data;
    }


    }

};
