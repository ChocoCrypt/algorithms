#include <iostream>
#include <queue>
#include <string>
#include <unistd.h>
using namespace std;

void sleep(int k){
    for(int i = 0 ; i<100000000*k ; i++){
        cout<<"";
    }
}



int main(){
    queue<string> fila;
    string nombre ;
    cout<<"digite los nombres hasta y cuando quiera acabar escriba end" <<endl;
    while(nombre != "end"){
        cin>> nombre;
        if(nombre == "end"){
            break;
        }
        else{
        fila.push(nombre);
        cout<<"se ha agregado a "<<nombre<<" a la fila"<<endl;
        }   

    }
    cout<<"ahora vamos a atender a cada cliente"<<endl;
    while(!fila.empty()){
        cout<<"serving "<<fila.front()<<endl;
        fila.pop();
        sleep(1);
    //usleep(1000000);

    }
    cout<<"todos los usuatios atendidos"<<endl;



}
