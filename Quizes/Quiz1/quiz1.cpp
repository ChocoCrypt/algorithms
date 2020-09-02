#include <iostream>
#include <list>
using namespace std;
void imprimirlista(list<int> lis){
    list<int>::iterator it ;
    for(it = lis.begin() ; it != lis.end() ; it++){
        cout<<*it<<" en el for \n";
    }
    cout<<"hasta aca vamos melos \n";


    it = lis.begin();
    while(true){
        cout<<*it<<" en el while \n";
        it ++;
        if(it==lis.end()){
            break;
        }

    }
}

int main(){
    list<int> myints = {1,2,3,4,5,6,7,8,9,10};
    imprimirlista(myints);
}
