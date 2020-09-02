#include "stack.hpp"
#include <iostream>
using namespace std;
int main(){
    Stack<int> sta;
    int a = 1;
    sta.push(a);
    cout<<sta.peek()<<endl;
}
