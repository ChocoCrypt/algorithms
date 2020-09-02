#include <iostream>
#include "punto8.hpp"
using namespace std ;

    Domino :: Domino(){
        num1 = 0 ;
        num2 = 0;
    }
    Domino :: Domino(int k , int n){
        num1 = k ;
        num2 = n;
    }
    void Domino :: setizquierda(int n){
        num1 = n;
    }
    void Domino :: setderecha(int k){
        num2 = k;
    }
    int Domino ::getizquierda(){
        return num1;
    }
    int Domino :: getderecha(){
        return num1;
    }
    string Domino :: tostring(){
        string repre  = "{ ";
        string cero = "cero";
        string uno =  "uno";
        string dos = "dos";
        string tres = "tres";
        string cuatro = "cuatro";
        string cinco = "cinco";
        string seis = "seis";
        if(num1 == 0){
            repre = repre + cero;
        }
        if(num1 == 1){
            repre = repre + uno;
        }
        if(num1 ==2 ){
            repre = repre + dos ;
        }
        if( num1 ==3 ){
            repre =  repre + tres ;
        }
        if(num1 == 4){
            repre = repre + cuatro ;
        }
        if(num1 == 5){
            repre = repre + cinco ;
        }
        if(num1 == 6){
            repre = repre + seis ;
        }
        repre = repre + " , " ;

        if(num2 == 0){
            repre = repre + cero;
        }
        if(num2 == 1){
            repre = repre + uno;
        }
        if(num2 ==2 ){
            repre = repre + dos ;
        }
        if( num2 ==3 ){
            repre =  repre + tres ;
        }
        if(num2 == 4){
            repre = repre + cuatro ;
        }
        if(num2 == 5){
            repre = repre + cinco ;
        }
        if(num2 == 6){
            repre = repre + seis ;
        }
        repre = repre + " }" ;
        return repre ;

    }
//AHORA VAN LOS OPERADORES

    //preguntar esto, porque esta como raro
    ostream& operator<<(ostream &o , Domino &a){
        o<<a.tostring()<<endl ;
        return o ;
    }

    bool Domino ::operator==(Domino dom){
        if(dom.getizquierda() !=  num1){
            return false;
        }
        if(dom.getderecha() != num2){
            return false ;
        }
        return true;
    }
    bool Domino ::operator!=(Domino dom){
        if(dom.getderecha() == num2  && dom.getizquierda() == num1){
            return false;
        }
        else{
            return true;
        }
    }
    bool Domino ::operator<(Domino dom){
        if((num1 + num2) < (dom.getizquierda() + dom.getderecha()) ){
            return true;
        }
        else{
            return false;
        }
    }
    bool Domino ::operator<=(Domino dom){
        if((num1 + num2) <= (dom.getizquierda() + dom.getderecha()) ){
            return true;
        }
        else{
            return false;
        }
    }
    bool Domino ::operator>(Domino dom){
        if((num1 + num2) > (dom.getizquierda() + dom.getderecha()) ){
            return true;
        }
        else{
            return false;
        }
    }
    bool Domino ::operator>=(Domino dom){
        if((num1 + num2) >= (dom.getizquierda() + dom.getderecha()) ){
            return true;
        }
        else{
            return false;
        }
    }
    //metodo flip preguntar como hacer para no tener que pasar otra variable
    Domino Domino :: flip2(){
        Domino flipeado;
        flipeado.setizquierda(num2);
        flipeado.setderecha(num1);
        return flipeado;
    }
    void Domino ::flip(){
        int temp ;
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
