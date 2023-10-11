#include <iostream>
using namespace std;

// Global variable
int x = 10;


int& returnByReference() {
    // Returns a reference to the global variable
    return x;
}

int main() {
    // Print the initial value of x
    cout << "x: " << x << endl; // 10
    // Get the reference to x
    int& a = returnByReference();
    // Change the value of a (which will change the value of x)
    a+=10;
    // Print the new value of x
    cout << "x: " << x << endl; // 20

    return 0;
}