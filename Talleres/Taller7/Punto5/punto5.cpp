#include <iostream>
#include <string>

char * deepcopy(char *ch ,int tam){
    char cha[tam];
    for (int i = 0 ; i<tam ; i++){
        cha[i] = ch[i];
    }
    return cha ;
}
