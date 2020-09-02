#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> myset ;
    set<int>::iterator it ;


    //agregar unos valores al conjunto
    for(int i= 0 ; i<10 ; i++){
        myset.insert(i) ;

    }
    //imprimir el set
    for( it = myset.begin() ; it != myset.end() ; it ++){
        cout<< *it<<" ";
    }


    return 0;
}
