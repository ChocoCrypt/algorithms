#include <iostream> 
using namespace std ;
int main(){
bool array[128];
for(int i = 0 ; i<128 ; i++){
	array[i] = 5 ;
}
cout<<array[100]<<endl;
bool *ap[128];
for(int i = 0 ; i<128 ; i++){
cout<<ap[i]<<endl;
}
}
