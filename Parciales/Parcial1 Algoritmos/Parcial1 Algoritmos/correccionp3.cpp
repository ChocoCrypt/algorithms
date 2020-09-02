#include<iostream>
#include<vector>
using namespace std;
int anti_peak(vector<int> & vec){
    for(int i = 1 ; i<vec.size()-1; i++){
        if(vec.at(i)<=vec.at(i+1) && vec.at(i)<=vec.at(i-1)){
            return i;
        }
    }
}
int main() {
  int v[] = {7,15,14,4,11,1,11,4,1,7,3,2,14};
  vector<int> vec(v, v + sizeof(v)/sizeof(int));

  int x = anti_peak(vec);

  cout << "Anti-peak at " << x << endl;

  return 0;
}
