#include <iostream>
using namespace std ;
int npot(int n , int k){
    if( k == 1){
        return n;
    }
    else{
        return n * npot(n , k-1);
    }
}

int main(){
    for(int i = 1 ; i<100 ; i++){
        cout<<i<<" " <<npot(2,i)<<endl;
    }
}
