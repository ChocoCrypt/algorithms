#include <string>
#include <iostream>
using namespace std ;
string revez;
string revez(string derecho){
    if(derecho.size() == 1){
        return derecho ;
    }
    else{
        revez =revez + derecho.at(size-1);
        derecho.pop_back();
        revez(derecho);
    }
}

int main(){

}
