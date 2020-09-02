#include<iostream>
#include<map>
#include <iomanip>
using namespace std;
bool espar(int n){
    if(n%2 ==0){
        return true;
    }
    else{
        return false;
    }
}

void printmap(map<int,int> mapa){
    map<int,int>::iterator it;
    for(it=mapa.begin() ; it!= mapa.end() ; it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

map<int,int> collatz(int n){
    map<int,int> mapa;
    int respuesta;
    int cont = 1 ;
    cout<<"mapa de collatz de "<<n<< " : "<<endl;
    //jajajaja perdon por este paso pero asi arregle todo
    mapa[cont] = n ;
    cont++ ;

    while(n!=1){

        if(espar(n)){
            n = n/2 ;
            mapa[cont] = n ;
            cont++;
        }
        else{
            n = n*3 +1 ;
            mapa[cont] = n ;
            cont++;
        }
    }

    return mapa;
}

int main() {
  cout << "Ingrese un entero positivo: ";
  int n;
  cin >> n;

  map<int,int> collatz_seq = collatz(n);

  cout << "Keys:   ";
  for(int i = 1; i < collatz_seq.size()+1; i++)
    cout << setw(3) << i << " ";
  cout << "\nValues: ";
  for(int i = 1; i < collatz_seq.size()+1; i++)
    cout << setw(3) << collatz_seq[i] << " ";
  cout << endl;

  return 0;
}
