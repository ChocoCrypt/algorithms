#include <iostream> 
using namespace std ;
int main(){
int integer , &refInt = integer;
integer = 5 ;
refInt = 10 ;
cout<<integer <<"\t" <<refInt<<endl;

}
