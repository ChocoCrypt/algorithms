#include <iostream>
#include <list>
using namespace std ;
void identity(list<int> lista){
    list<int>::iterator it;
    unsigned int cont = 0 ;
    for(it = lista.begin() ; it != lista.end() ; it++){
        if(*it ==cont){
            cout<<*it << " esta en el mismo punto"<<endl;
        }
        cont++;
    }
}

int main(){
    list<int> lista = {1,2,3,4,5,6,7,8,9 , 9};
    identity(lista);
}
