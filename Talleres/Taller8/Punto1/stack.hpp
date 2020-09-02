#ifndef _STACK_HPP_
#define _STACK_HPP_
using namespace std ;
#include<iostream>

template <typename T>
class Stack{
private:
    struct Cell{
        T data;
        Cell *link ;
    };
    Cell *stack;
    int count ;
    void deepcopy(const Stack<T> & src);

public:
    Stack(){
        count = 0 ;
        stack = nullptr ;
    }
    ~Stack() {
        clear();
        delete stack ;
    }; //preguntar este metodo porque niidea
    // preguntar que es ese size_t size_t size() {} //preguntar tambien
    bool empty(){
        if(count == 0){
            return true;
        }
        else{
            return false;
        }
    }
    void clear(){
        while(!empty()){
            T elem = pop();
        }
    }
    void push(T &ch){ //preguntar esto
        if(empty()){
            Cell *algo = new Cell;
            algo->data = ch;
            algo ->link = nullptr;
            stack = algo->link;
            count++;
        }
        else{
            Cell *m = stack;
            Cell *algo = new Cell ;
            algo->data = ch;
            algo ->link = m;
            stack = algo->link;
            count++;
        }

    }
    T pop(){ //preguntar
        if(empty()){
            cout<<"the stack is empty"<<endl;
        }else{
            Cell *m ;
            Cell *s;
            m = stack;
            s = m;
            stack = s;
            count--;
        }
    }
    T peek(){//preguntar
        Cell *a;
        return  stack->data;
    }




};
#endif
