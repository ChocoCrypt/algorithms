#include <iostream>
using namespace std;
long long int nesimapotencia(int n, int k){
    if(k==0){
        return 1;
    }
    if (k==1){
        return n;
    }
    else{
        //cout<<"k = " <<k << " n = "<<nesimapotencia(n , k) <<endl;
        return nesimapotencia(n ,k-1)*n;
    }
}
int main(){
    cout<<nesimapotencia(4,3)<<endl;
}
