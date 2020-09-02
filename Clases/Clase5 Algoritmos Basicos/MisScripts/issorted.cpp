#include <iostream>
#include <vector>
using namespace std ;
bool issorted(vector<int> vec){
    cout<<"empezamos"<<endl;
    for(int i= 0 ; i<vec.size()-1; i++){
        if(vec.at(i) <= vec.at(i+1)){
            cout<<"melo \n ";

        }
        else{
            cout<<"nada pa \n";
            return false;
        }

    }
    return true ;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,0};
    bool a = issorted(vec);
    if(issorted(vec)){
        cout<<"esta ordenado"<<endl;
    }
    else{
        cout<<"no esta ordenado"<<endl;
    }
}
