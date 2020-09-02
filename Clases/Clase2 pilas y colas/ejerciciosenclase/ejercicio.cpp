#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> first;
    list<int> second(4,100);
    list<int> third(second);

    return 0;
}
