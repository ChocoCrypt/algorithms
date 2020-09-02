#include <iostream>
#include <vector>

int maxsub (vector<int> a){
  int maxsum = 0 ;
  for(int i=0 ; i<a.size() ; i++){
    for(int j = i ; j<a.size() ; j++){
      int thissum= 0 ;
      for(int k = 0 ; k<=j ; k++){
        thissum = a[k];

        if(thissum > maxsum){
          maxsum = thissum ;
        }
      }
    }
  }
  return maxsum;
}
