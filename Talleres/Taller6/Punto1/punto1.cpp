#include <iostream>
using namespace std;
int recu(int n){
    if(n==1){
        return 1;
    }
    else{
        return recu(n/3 + 1)+n -1;
    }
}
int main(){
    recu(10);
    for(int i = 0 ; i<100 ; i++){
        cout<<recu(i)<<" de "<<i<<endl;
    }
}
