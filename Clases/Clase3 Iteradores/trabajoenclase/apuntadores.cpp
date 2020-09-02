#include <iostream>
#include <vector>
using namespace std;
int main(){
    const int size = 10 ;
    int myarray[size];
    for(int i = 0 ; i<size ; i++){
        myarray[i] = 12-i ;

    }
    int *it = nullptr ;
    for(it = myarray ;  it != myarray +size ; it++){
        cout<< it <<endl;
        cout<< *it<<endl;
    }
    vector<int> *iterador =  nullptr ;
    cout<<"el iterador es "<< (iterador+1) <<endl;
}
