#include <stack>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> vec ;
    stack<int> sta ;
    for(int i = 0 ; i<100000000 ; i++){
        vec.push_back(i);
        sta.push(i);
    }
    int tamanostack = sizeof(sta);
    int tamanovector = sizeof(vec);
    if( tamanostack == tamanovector){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
        cout<<"el tamano del vector es : "<<tamanovector<<endl;
        cout<<"el tamano del stack es :"<<tamanostack <<endl;
    }
    return 0;
}
