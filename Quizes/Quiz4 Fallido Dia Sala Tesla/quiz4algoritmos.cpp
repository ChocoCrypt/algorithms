#include <iostream>
#include <string>
using namespace std;
bool espar(int n){
    if(n%2 == 0){
        return true;
    }
    else{
        return false;
    }
}
string revez(string str){
    string revezi = "";
    for(int i = str.size()-1 ; i>= 0 ; i--){
        revezi = revezi + str.at(i);
    //    cout<<revezi<<endl;
    }
    return revezi;
}
string binario ="";
string d2b(int n){
    if(n==0){
        return revez(binario);
    }
    else{
        if(espar(n)){
            binario = binario + "0";
            return d2b(n/2);
        //    cout<<n<<endl;
        //    cout<<n<<endl;
        }
        else{
            binario = binario + "1";
        //    cout<<n<<endl;
            return(d2b((n/2) ));
        }

    }
}
int main(){
    cout << "Ingrese un entero en formato decimal: ";
int n;
cin >> n;

string bin = d2b(n);

cout << "La representación binaria es: "+bin+"\n";

return 0;

}
