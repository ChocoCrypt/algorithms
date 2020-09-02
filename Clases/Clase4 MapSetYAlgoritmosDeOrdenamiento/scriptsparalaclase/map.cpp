#include <iostream>
#include <map>
using namespace std;
int main(){
    map<char , int> mapa ;
    map<char, int > ::iterator it ;
    mapa['a'] = 10 ;
    mapa['c'] = 15 ; 
    if(mapa.count('c')){
        cout<<"c existe perrito"<<endl;
    it = mapa.find('c');
    cout<<"el elemento es "<<it->first<<" y la llave es "<<it->second<<endl;
    }
    cout<<sizeof(mapa)<<endl;

}
