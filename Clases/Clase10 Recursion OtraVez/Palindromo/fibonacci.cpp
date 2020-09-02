#include <iostream>
#include <string>
using namespace std ;
bool palindromo(string a ,int cont){
    if(a.at(0)!= a.at(a.size())){
        return false;
    }
    else{
        cont++;
        palindromo(substr(cont , a.size() - cont));
        return palindromo;
    }

    if(substr(cont , a.size() -cont).size()<=0){
        return true;
    }
}
