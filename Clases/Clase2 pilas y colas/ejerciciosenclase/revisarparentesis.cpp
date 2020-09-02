#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool Ispair(int a){
    if(a%2 ==0 ){
        return true ;
    }
    else{
        return false;
    }


}
int main(){
    string input;
    cin>>input;
    stack<char> sta;
    for(int i =  input.size()-1 ; i>=0 ;   i--){
        sta.push(input.at(i));
        cout<<input.at(i)<<endl;
    }
    int cont  = 1 ;
    while(!sta.empty()){
        if(sta.top() == ')'){
            cont ++ ;
            sta.pop();
        }
        if(sta.top() == '('){
            cont -- ;
            sta.pop();
        }
        cout<<cont<<endl;

        if(cont == -1){
            cout<<"esta mal ordenado"<<endl;
        }

        if(!sta.empty()){
            sta.pop();
        }
    }

    if(cont == 0){
        cout<<"esta bien ordenado"<<endl;
    }
    if(cont != 0){
        cout<<"esta mal ordenado 1"<<endl;
    }
return 0;
}
