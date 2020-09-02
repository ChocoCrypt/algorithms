//
#include "hashmap.cpp"
using namespace std;
int main(){
    HashMap<int> mimapa(-1);
    mimapa.insert("hola", 10);
    cout<<mimapa.get("hola")<<endl;
    mimapa.insert("aloh" , 100);
return 0;
}
