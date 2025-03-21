#include <iostream>
#include <vector>
using namespace std;
#include "convert2binary.h"

void print_binary(int num) {
    int bin[32];
    int i = 0;

    while (num > 0) {
        bin[i] = num % 2;
        num /= 2;
        i++;
    }

    cout << "result - simple function: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << bin[j];
    }
    cout << endl;
}
// new part

void print_binary_vector(int num) {
    vector< int> bin;
    while (num > 0) {
        bin.insert(bin.begin(), num % 2);
        num = (num - num % 2) / 2l;
    }
    cout << "result - vector: ";
    for (unsigned int i = 0; i < bin.size(); i++) {
        cout << bin[i];
    }
    cout << endl;
}