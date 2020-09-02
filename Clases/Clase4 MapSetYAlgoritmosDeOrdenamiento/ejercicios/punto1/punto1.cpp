#include <iostream>
#include <map>
using namespace std;

map<int ,int>  llenarmapa(int n){
    map<int , int > mapa ;
    map<int,int> :: iterator it ;
    //ahora vamos a llenar el llenar el mapa
    for(int i =  1 ; i<n ; i++){
        mapa[i] = i*i ;
    }
    //ahora vamos a imprimirlo para chequear
    for(int i=1 ; i<n ; i++){
        it = mapa.find(i);
        cout<<"el elemento es "<<it->first<<" y la llave es "<<it->second<<endl;
    
    }
    return mapa;
}


int main(){
    map<int, int> mapi ;
    mapi = llenarmapa(10);

}
