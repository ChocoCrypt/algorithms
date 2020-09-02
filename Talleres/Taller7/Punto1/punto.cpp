#include <iostream>
using namespace std ;
int main(){
    int val = 1024;
    int &ref ;
    int &rval = val;
    int *pval1 = &rval;

    cout<<val<<" "<< ref<<" "<<rval<<" "<<pval1<<endl;
}
