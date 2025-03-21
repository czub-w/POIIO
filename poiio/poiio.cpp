#include <iostream>
using namespace std;

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

int main()
{
    cout << "prog obiek - lab 01\n\n";

    int num = 18;
    print_binary(num);
    return 0;
}
