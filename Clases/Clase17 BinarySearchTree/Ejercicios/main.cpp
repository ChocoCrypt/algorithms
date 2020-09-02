#include "arbol.hpp"
#include <iostream>
#include <string>
using namespace std;

int main () {
  BST<string> enanos;

  enanos.insertNode("Grumpy");
  enanos.insertNode("Doc");
  enanos.insertNode("Sleepy");
  enanos.insertNode("Bashful");
  enanos.insertNode("Dopey");
  enanos.insertNode("Happy");
  enanos.insertNode("Sneezy");

  enanos.displayNode();

cout<<enanos.predecessor("Sleepy")->key <<endl;
cout<<"\n \n ahora se va a destruir todo \n \n \n";
  return 0;
}
