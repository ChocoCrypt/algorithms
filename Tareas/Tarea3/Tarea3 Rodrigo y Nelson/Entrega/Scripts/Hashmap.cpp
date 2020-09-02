#ifdef  _HashMap_hpp_

template <typename VT>
HashMap<VT>::HashMap(VT def){
  notfound = def;
  count = 0;
  tableSize = TABLE_SIZE;
  table = new KeyValueNode<VT>*[tableSize];
  for(int i = 0 ; i<tableSize;i++){
    table[i]=nullptr;
  }
}
template <typename VT>
HashMap<VT>::~HashMap (){
  clear();
}
template <typename VT>
int HashMap<VT>::size(){
  return count;
}
template <typename VT>
bool HashMap<VT>::empty(){
  return count == 0;
}
template <typename VT>
void HashMap<VT>::clear(){
  unsigned int x = tableSize;
  for(unsigned int i = 0 ; i < x ; i++){
    KeyValueNode<VT> *ptr = table[i];
    while(table[i]!=nullptr){
      KeyValueNode<VT> *oldptr = ptr;
      table[i] = table[i]->next;
      delete oldptr;
    }
  }
  count = 0;
}

template <typename VT>
VT HashMap<VT>::get(string  key){
  unsigned int index = hash(key);
  KeyValueNode<VT> *pepito = search_bucket(index , key);
  if (pepito==nullptr){
    return notfound;
  }else{
    return pepito ->value;
  }
}

template <typename VT>
bool  HashMap<VT>::search(string  key){
  if(empty()){
    cout << "¡No hay nada que buscar!"<<'\n';
    exit(EXIT_FAILURE);
  }else if(get(key)==notfound){
    return false;
  }else{
    return true;
  }
}

template <typename VT>
bool  HashMap<VT>:: insert(string key , VT  value){
  unsigned int index = hash(key);
  KeyValueNode<VT> *cp = search_bucket(index , key);
  bool resul= true;
  if(cp != nullptr) return resul;
  else{
    if(table[index]==nullptr){
        KeyValueNode<VT> *temp = new KeyValueNode<VT>;
        temp->key = key;
        temp->value = value;
        table[index] = temp;
        count ++;
    }else{
        KeyValueNode<VT> *temp = new KeyValueNode<VT>;
        temp->key = key;
        temp->value = value;
        temp->next = table[index];
        table[index]=temp;
        count ++;
        }
    resul = false;
    }
  return resul;
}

template <typename VT>
void HashMap<VT>::remove(string  key){
  unsigned int index = hash(key);
  if(table[index]==nullptr){
    cout << "¡No hay nada que borrar!"<<'\n';
    //exit(EXIT_FAILURE);
  }else {
    KeyValueNode<VT> *ant = nullptr;
    KeyValueNode<VT> *ptr = table[index];
    while(ptr != nullptr  &&  key != ptr->key){
      ant = ptr;
      ptr = ptr->next;
    }
    if(ant == nullptr){
      table[index]= ptr->next;
      delete ptr;
    }else{
      ant->next = ptr->next;
      delete ptr;
    }
    count --;
  }

}
/*
template <typename VT>
void HashMap<VT>::distribution(const  string &filename){
  string line="";
  ifs.open(filename);
    if (ifs.good()){
      while (!ifs.eof()){
        getline(ifs , line);
      }
    }
    ifs.close();
}*/















#endif //_HashMap_hpp_
