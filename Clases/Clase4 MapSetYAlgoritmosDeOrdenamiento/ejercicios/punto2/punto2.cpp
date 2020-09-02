#include <iostream>
#include <map>
#include <string>

using namespace std;
//para este metodo me toco ponerle el string palabra para compararlos, sin embargo no se como recorrer todo el mapa y decir cuales estan iguales, por eso tengo que preguntarle a carlos

int punto2algoritmos(map<string , int> map1 , map<string,int> map2 , string palabra){
    map<string , int>::iterator it1 ;
    map<string , int > ::iterator it2 ;
    //si esta en los 2, pues imprime el valor asignado a cada llave
    if(map1.count(palabra) && map2.count(palabra)){
        cout<<palabra << " esta en ambos ";
        it1 = map1.find(palabra);
        it2 = map2.find(palabra);
        cout<<", en el primer mapa está en " <<it1->second << " y el en segundo mapa en el "<<it2->second<<endl;

    }
    else{
        cout<<"el elemento no esta en ninguna de los dos mapas" <<endl ;
    }

    return 0 ;
}
int main(){
    map<string,int> mapa1 ;
    map<string,int> mapa2 ;
    mapa1["palabra"] = 10 ;
    mapa2["palabra"] = 25;
    cout<<"prueba 1 : ";
    punto2algoritmos(mapa1 , mapa2 , "palabra");
    cout<<"prueba 2 : ";
    punto2algoritmos(mapa1 , mapa2 , "palabras");

}
