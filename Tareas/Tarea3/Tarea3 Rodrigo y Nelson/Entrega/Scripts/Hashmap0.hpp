#ifndef _HashMap0_hpp_
#define _HashMap0_hpp_
#include <iostream>
#include <string>
#include <cstdint>
#include <limits>
#include  <fstream>
using namespace std;

const int TABLE_SIZE = 1013;

template <typename VT>
struct KeyValueNode {
  string key;
  VT value;
  KeyValueNode<VT> *next;
};
template <typename VT>
class HashMap0 {
private:
  //puntero de punteros que mandad hacia los contenedores
  KeyValueNode<VT> **table;

  int tableSize; // tamaño de la tabla de punteros
  int count; // numero de elementos en la tabla

  // valor por defecto a retornar cuando se busquen errores
  VT notfound;
  double lamda;

  // buscar para key "key" dentro del contenedor con el index
  // "index" de la tabla
  // retorna los elementos encontrados si encuentras ,y si no retorna  nullptr
  KeyValueNode<VT>* search_bucket(int index , string key){
    KeyValueNode<VT> *ptr = table[index];
    while(ptr != nullptr && key != ptr->key){
      ptr = ptr->next;
    }
    return ptr;
  }
  // suma los códigos ascci de sus caracteres
  unsigned int hash0(string key,int tableSize) {
    unsigned int hashVal = 0;
    for (char ch : key)
      hashVal += ch;
    return hashVal % tableSize;
  }

public:
  HashMap0(VT def);
  ~HashMap0();

  int size(); //retornar numero de elementos
  bool empty(); // verdadero si hay o no elementos
  void clear (); //eliminar todos los elementos

  //  chained  hash  search: search  for  elem  with  key = key
  VT get(string  key);
  //  return  true if key is in  table
  bool  search(string  key);
  //  chained  hash  insert: insert  at the  head of  bucket
  bool  insert(string key , VT  value);
  //  chained  hash  remove: remove  element  with  key = key
  void  remove(string  key);
  // print  no. of elems  in each  bucket  to a file  filename
  //void  distribution(const  string &filename);

};

#include "Hashmap0.cpp"


#endif
