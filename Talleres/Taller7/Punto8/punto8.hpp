#ifndef _PUNTO8_HPP_
#define _PUNTO8_HPP_
#include <iostream>
#include <string>
using namespace std;
class Domino{
private:
    int num1 ; int num2 ;

public:
    Domino();
    Domino(int k , int n);
    void setizquierda(int n);
    void setderecha(int k);
    int getizquierda();
    int getderecha();
    string tostring();
//AHORA VAN LOS OPERADORES

    //preguntar esto, porque esta como raro

    bool operator==(Domino dom);
    bool operator!=(Domino dom);
    bool operator<(Domino dom);
    bool operator<=(Domino dom);
    bool operator>(Domino dom);
    bool operator>=(Domino dom);
    //metodo flip preguntar como hacer para no tener que pasar otra variable
    Domino flip2();
    void flip();
};
    ostream& operator<<(ostream &o , Domino &a);



#endif
