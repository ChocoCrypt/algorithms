#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <wchar.h>
using namespace std;

const int TABLE_SIZE = 101;
// suma los códigos ascci de sus caracteres
unsigned int hash0(string key, int tableSize) {
  unsigned int hashVal = 0;
  for (char c : key)
    hashVal += c;
  return hashVal % tableSize;
}
// dado que hay 64 caracteres, calcula el código del
// string en base 64
unsigned int hash64(string key, int tableSize) {
  unsigned int hashVal = 0;
  for (char c : key)
    hashVal += 64 * hashVal + c;
  return hashVal % tableSize;
}

int main() {
  // size of the table
  int tSize = TABLE_SIZE;

  // read the words to a vector

  vector<string> words;
  ifstream ifs;
  string line;
  ifs.open("palabras.txt");
  while (getline(ifs , line)){
    words.push_back(line);
  }
  cout<<words.size()<<endl;
  ifs.close();
  // check the file was loaded to the vector
  for (unsigned int i = 0; i < words.size(); ++i) {
    cout << words[i] << endl;
  }

  // count how many words where mapped to each of the
  // 100 elements of the table...

  //...using hash0
  unsigned int count_hash0[tSize] = {0};
  for(unsigned int i = 0 ; i < words.size() ; i++){
    unsigned int  u = hash0(words[i],tSize);
    count_hash0[u]+=1;
  }

  for( int i = 0 ; i < tSize ; i++){
    cout << count_hash0[i] <<'\n';
  }
std::cout  << '\n';

  // ...using hash64
  unsigned int count_hash64[tSize] = {0};
  for(unsigned int i = 0 ; i < words.size() ; i++){
    unsigned int u = hash64(words[i],tSize);
    count_hash64[u]++;
  }
  for( int i = 0 ; i < tSize ; i++){
    cout << count_hash64[i] << '\n';
  }
 // print the output to a file that can be loaded and
  // plotted with python
  ofstream outfile("hash0.txt");
  int cnt = 0;
  while(cnt != tSize){
    outfile << count_hash0[cnt] << '\n' ;
    cnt++;
  }
  outfile.close();

  ofstream file("hash64.txt");
  int crnt = 0;
  while(crnt != tSize){
    file << count_hash64[crnt] << '\n' ;
    crnt++;
  }
  file.close();

  return 0;
}
