#include <iostream>
#include <vector>
using namespace std;


float dispble(vector<float> consumo, float cupo_tot) {
  //Su
  //código
  //aquí.
}

int transcc(vector<float> consumo, float cupo_tot) {
  //Su
  //código
  //aquí.
}


int main() {
  float cupo_tot = 1000;

  float c[] = {0.02,3.58,18.78,8.27,10.60,18.63,15.72,10.00,11.06,19.30};
  vector<float> consumo(c, c + sizeof(c)/sizeof(float));

  float disp = dispble(consumo, cupo_tot);
  int t_valid = transcc(consumo , cupo_tot);

  cout << cupo_tot << " disp: " << disp;
  cout << " Última trans. válida: " << t_valid << endl;

  return 0;
}
