#ifndef _HASHMAP_CPP_
#define _HASHMAP_CPP_
#include <string>
#include <iostream>
using namespace std;
const int TABLE_SIZE = 1013;

template <typename valuetype>
struct KeyValueNode{
        string key;
        valuetype value;
        KeyValueNode<valuetype> *next;
};

template<typename valuetype>
class HashMap{
private:
    KeyValueNode<valuetype> ** table;
    int tableSize;
    int count;
    valuetype notfound;

    KeyValueNode<valuetype> * search_bucket(int index, string key);

    unsigned int hash(string key){
        unsigned int hashval = 0;
        for(char ch : key){
            hashval += ch;
        }
        return hashval % tableSize;
    }

public:
    HashMap(valuetype def){
        tableSize = TABLE_SIZE;
        count = 0;
        notfound = def;
        table = new KeyValueNode<valuetype>*[TABLE_SIZE];

        for (int i = 0 ; i<TABLE_SIZE ; i++){
            table[i] = nullptr;
        }
    }
    void clear(){
        for (int i = 0 ; i<TABLE_SIZE ; i++){
            while(table[i] !=  nullptr){
                KeyValueNode<valuetype>  *aux  = table[i];
                cout<<"Deleting..."<<aux->key<<" , "<<aux->value<<endl;
                table[i] = table[i]->next;
                delete aux;
            }
        }
        count = 0;
    }
    ~HashMap(){
        clear();
    }
    int size(){
        return count;
    }
    bool empty(){
        if (count ==0 ){
            return true;
        }
        else{
            return false;
        }
    }
    valuetype get(string key){
        int num = hash(key);
        KeyValueNode<valuetype>  *add = search_bucket(num , key);
        if(add == nullptr){
            return notfound;
        }{
            return add->value;
        }

    }

    bool search(string key){
        int num =  hash(key);
        KeyValueNode<valuetype> * punt = table[num];
        while(punt != nullptr){
            if(punt -> key == key){
                return true;
            }
            punt = punt->next;
        }
        return false;


        }

    bool insert(string key , valuetype value);
void display(){
    for (int i = 0 ; i<TABLE_SIZE ; i++){
        while(table[i] !=  nullptr){
            KeyValueNode<valuetype>  *aux  = table[i];
            cout<<table[i]->key <<" , "<<table[i]->value <<endl;
            table[i] = table[i]->next;

        }
    }
    count = 0;
}
};
template<typename valuetype>
KeyValueNode<valuetype> * HashMap<valuetype> ::  search_bucket(int index, string key){
    KeyValueNode<valuetype> * add  = table[index];
    while(add != nullptr){
        if(add->key == key){
            return add;
        }
        add  = add->next;
        return add;

    }

}


template <typename valuetype >
bool HashMap<valuetype> :: insert(string key , valuetype value){
    int index = hash(key);
    KeyValueNode<valuetype> *add = search_bucket(index, key);
    if (add == nullptr){
        add = new KeyValueNode<valuetype>;
        add -> key = key;
        add -> value = value ;
        table[index] = add;
        count ++;
    }else{
        add -> value = value;
        return false;
    }
    add->value = value;
    return true;
}





#endif
