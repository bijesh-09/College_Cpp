#include <iostream>
using namespace std;

// Pass by reference
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Return by reference
int& larger(int &a, int &b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 5, b = 10;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b); // Pass by reference
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // Return by reference
    larger(a, b) = 100; // Sets the larger variable to 100
    cout << "After larger(a, b) = 100: a = " << a << ", b = " << b << endl;
    return 0;
}