#include <vector>
#include <iostream>
using namespace std;
int main(){
    const int size = 4 ;
    vector<int> v(size ,1);
    vector<int>::iterator it ;
    cout<<"sin interadores  = ";
    for(int i = 0 ; i<size ; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\ncon iteradores :";
    for(it = v.begin() ; it != v.end() ; it++){
        cout<< *it << " " ;
    }
    cout<<""<<endl;

}
