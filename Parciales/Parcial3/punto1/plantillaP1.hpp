#ifndef _LIST_HPP
#define _LIST_HPP

#include <stack>
#include <iostream>
#include <stdexcept>
using namespace std;


template <typename T>
class List {
private:
    struct Cell {
        T dat;
        Cell *next;
    };

    Cell *back;
    int count;

public:
    List();
    ~List();

    bool empty();
    int size();
    void push(T val);
    void pop();

    void display();
    void reverse();
};

#include "plantillaP1.cpp"

#endif
