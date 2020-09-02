#include <iostream>
using namespace std;
int maximocomun(int n, int k){
    long gcd , num, rest ;

}


class Racional{
private:
    int a;
    int b;
public:
    Racional(){
        a = 1;
        b b =1 ;
    }
    Racional(int num , int k){
        a = num ;
        b = k;
    }

    //metodos set y get
    void setnum(int n , int k){
        a = n; b = k;
    }
    int geta(){
        return a;
    }
    int getb(){
        return b;
    }
    Racional operator*(Racional ra){
        Racional multi;
        multi.setnum(a * ra.geta() , b* ra.getb() );
        return multi;
    }
    void imprimirRacional(){
        cout<<"numerador: "<<a<<"\ndenominador: "<<b<<endl;
    }

    Racional operator+(Racional ra){
        Racional suma;

    }

};
int main(){
Racional num1; Racional num2;

}
