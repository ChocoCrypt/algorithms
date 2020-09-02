#include <iostream>
#include "prueba1.hpp"
using namespace std ;
int main(){
    int a = sumar1<int>(1);
    cout<<a<<endl;
    char b = sumar1<char>('a');
    cout<<b<<endl;

}
