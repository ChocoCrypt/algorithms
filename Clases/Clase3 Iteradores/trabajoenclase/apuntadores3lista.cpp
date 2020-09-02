#include <iostream>
using namespace std ;
int main(){
    int myarray[size];
    for(it i = myarray.begin() ; it != myarray.end() ; it ++){
        if( it == myarray.begin()+1){
            it = myarray.insert(it , 5);
        }
    }
}
