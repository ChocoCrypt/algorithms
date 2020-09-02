#include <iostream>
#include <string>
#include <random>
#include "plantillaP2.hpp"
using namespace std;

int main() {
    // integer random number generation
    string msg;
    random_device rd;
    default_random_engine generator{rd()};
    uniform_int_distribution<int> distribution(-9, 9);

    // binary search tree declaration
    bst<int> test;

    // fill out tree
    for (int i = 0; i < 9; i++) {
        int number = distribution(generator);
        cout << "number " << number << endl;
        test.insert(number);
    }

    // print tree and check bst
    test.display();
    cout << boolalpha << "bst? " << test.check_if_bst() << endl;

    // removing some one-child nodes
    for (int i = -9; i <= 9; i += 3) {
        cout << "remove " << i << endl;
        test.remove(i);
    }

    // print tree and check bst
    test.display();
    cout << boolalpha << "bst? " << test.check_if_bst() << endl;

    return 0;
}
