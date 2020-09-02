#ifdef  _HashMap0_hpp_

template <typename VT>
HashMap0<VT>::HashMap0(VT def){
  notfound = def;
  count = 0;
  lamda = 0;
  tableSize = TABLE_SIZE;
  table = new KeyValueNode<VT>*[tableSize];
  for(int i = 0 ; i<tableSize;i++){
    table[i]=nullptr;
  }
}
template <typename VT>
HashMap0<VT>::~HashMap0 (){
  clear();
}
template <typename VT>
int HashMap0<VT>::size(){
  return count;
}
template <typename VT>
bool HashMap0<VT>::empty(){
  return count == 0;
}
template <typename VT>
void HashMap0<VT>::clear(){
  unsigned int x = tableSize;
  for(unsigned int i = 0 ; i < x ; i++){
    KeyValueNode<VT> *ptr = table[i];
    while(table[i]!=nullptr){
      KeyValueNode<VT> *oldptr = ptr;
      table[i] = table[i]->next;
      remove(oldptr->key);
    }
  }
  count = 0;
}

template <typename VT>
VT HashMap0<VT>::get(string  key){
  unsigned int index = hash0(key,tableSize);
  KeyValueNode<VT> *pepito = search_bucket(index , key);
  if (pepito==nullptr){
    return notfound;
  }else{
    return pepito ->value;
  }
}

template <typename VT>
bool  HashMap0<VT>::search(string  key){
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
bool  HashMap0<VT>:: insert(string key , VT  value){
  unsigned int index = hash0(key,tableSize);
  KeyValueNode<VT> *cp = search_bucket(index , key);
  if(cp == nullptr){
      cp = new KeyValueNode<VT>;
      cp->key = key;
      cp->value = value;
      cp->next = table[index];
      table[index] = cp;
      count ++;
      lamda = double(count)/tableSize;
      return true;
    }else{
      cp->value = value;
      return false;
    }
}

template <typename VT>
void HashMap0<VT>::remove(string key){
  unsigned int index = hash0(key,tableSize);
  count--;
  KeyValueNode<VT> *l = table[index],*pr = nullptr;
  while(l!= nullptr){
    if(key == l->key){
      if(pr==nullptr){
        table[index]=l->next;
        delete l;
        break;
      }
      else{
        pr->next=l->next;
        delete l ;
        break;
      }
    }
    else{
      pr=l;
      l = l->next;
    }
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
