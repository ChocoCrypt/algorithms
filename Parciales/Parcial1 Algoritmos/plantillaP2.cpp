#include <iostream>
#include <iomanip>
#include <map>
using namespace std;


map<int,int> collatz(int n) {
  //Su
  //código
  //aquí.
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
