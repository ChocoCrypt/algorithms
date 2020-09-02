#include <iostream>
#include <list>
#include<vector>
using namespace std;
//preguntar esto
int findidentity(list<int> lista){
    list<int>::iterator it;
    int indice = 0 ;
    for(it = lista.begin() ; it!= lista.end() ; it++){
        if(indice == *it){
            return indice ;
        }
        indice++;
    }
    return -1 ;
}

int enterofaltante(vector<int>vec){
    int faltante = 0;
    vector<int> ::iterator it ;
    for(int i = 0 ; i<vec.size()-1; i++){
        if(vec.at(i) != vec.at(i+1) -1){
            faltante = vec.at(i) +1 ;
        }
    }
    return faltante;
}
void twosmallest(vector<int> vec){
    int maschico = vec.at(0);
    //creo que tengo que agarrar un maximo
    int maximo = vec.at(0);
    //hasta aca tengo el elemento mas pequeno
    for(int i = 0 ;i<vec.size(); i++){
        if(vec.at(i)< maschico){
            maschico = vec.at(i);
        }
        if(vec.at(i)> maximo){
            maximo = vec.at(i);
        }

    }
    //ahora si puedo definir el segundo mas chico sin miedo
    int segundomaschico = maximo;
    //ahora voy a encontrar el segundo mas pequeno
    for(int i= 0 ; i<vec.size() ; i++ ){
        if((vec.at(i) > maschico) && (vec.at(i) <= segundomaschico)){
            segundomaschico = vec.at(i);
        }
    }
//    cout<<"el mas chico es "<<maschico <<" y el segundo mas chico es "<<segundomaschico<<endl;
}

int main(){
    list<int> list = {1,2,3,4,4,5,6};
    findidentity(list);
    vector<int> vec = {1,2,3,4,5,6,7,8,10};
    int faltante  = enterofaltante(vec);
//    cout<<"el faltante en el vector es : "<<faltante<<endl;
    twosmallest(vec);
    cout<<findidentity(list)<<endl;
}
