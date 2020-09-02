#include <iostream>
#include <stack>
#include "plantillaP1.hpp"
using namespace std;

int main() {
    List<int> mylist;
    for(int i = 0; i < 5; ++i)
        mylist.push(i);

    mylist.display();

    mylist.reverse();

    mylist.display();

    return 0;
}
