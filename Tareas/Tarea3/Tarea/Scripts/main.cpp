//
#include "hashmap.cpp"
#include <fstream>
#include <random>
#include <vector>
#include <cmath>
#include <sys/time.h>
#include <string>
using namespace std;


vector<string> readtext(){
    vector<string> tex;

    ifstream myReadFile;
    myReadFile.open("palabras.txt");
    char output[100];
    if (myReadFile.is_open()) {
    while (!myReadFile.eof()) {

       tex.push_back(output);
       myReadFile >> output;
       //cout<<output;


    }
   }
   return tex;
   myReadFile.close();

}

void printvector(vector<string> vec){
    for(int i = 0 ; i<vec.size() ; i++){
        cout<<" "<<vec.at(i);
    }
    cout<<"\n";
}



int main() {

    HashMap<int> mimapa(-1);
    string texto = "h";
    for(int i = 0 ; i<40 ; i++){
        mimapa.insert(texto, i);
        texto = texto + "a" ;
    }
    mimapa.display();

return 0;
}
