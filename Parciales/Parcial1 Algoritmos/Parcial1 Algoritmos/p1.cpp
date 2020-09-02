
#include<iostream>
#include<vector>
using namespace std;
float dispble(vector<float> consumo , float cupo_tot){
    float consumototal;
    for(unsigned i = 0 ; i<consumo.size() ; i++){
        consumototal = consumototal + consumo.at(i);
    }
    float respuesta = cupo_tot - consumototal;

    if(respuesta>0){
        cout<<"el cliente puede seguir consumiendo"<<endl;
    }
    else{
        cout<<"la tarjeta de credito esta sobregirada"<<endl;
    }
}

int transcc(vector<float> consumo , float cupo_tot){
    float consumohastaahora = cupo_tot ;
    for(unsigned i =0 ; i<consumo.size() ; i++){
        consumohastaahora = consumohastaahora - consumo.at(i);
        if(consumohastaahora<0){
            cout<< i-1<< " es la ultima transaccion valida"<<endl;
            return(i-1);
        }
    }
    cout<<"todas las transacciones fueron validas "<<endl;
    return(-1);
}
int main() {
  float cupo_tot = 100;



  float c[] = {0.02,3.58,18.78,8.27,10.60,18.63,15.72,10.00,11.06,19.30};
  vector<float> consumo(c, c + sizeof(c)/sizeof(float));

  float disp = dispble(consumo, cupo_tot);
  int t_valid = transcc(consumo , cupo_tot);

  cout << cupo_tot << " disp: " << disp;
  cout << " Última trans. válida: " << t_valid << endl;

  return 0;
}
