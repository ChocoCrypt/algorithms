#include <iostream>
#include <stack>
using namespace  std;
bool compareend(stack<int> sta){
  int primerelemento ;
  stack<int> stack2 = sta;
  while(!sta.empty()){
    primerelemento = sta.top() ;
    sta.pop();
  }
  cout<<"el primerelemento es : "<<primerelemento <<endl;
  //ahora copiamos lo que teniamos
  sta = stack2 ;

  if(sta.top()>=primerelemento){

    cout<<"el ultimo elemento es mayor que el primer elemento"<<endl;
    return true;
  }
  else{

    cout<<"el ultimo elemento es menor que el primer elemento"<<endl;
    return false;
  }
  return false;
}

int main(){
  //voy a llenar el stack con cosas
  stack<int> sta;
  for(int i = 0 ; i<10 ; i++){
    sta.push(i);
  }
  compareend(sta);
}
