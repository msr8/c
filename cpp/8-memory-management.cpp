#include <iostream>
using namespace std;

int main() {
    int *a = new int(5); // Allocate memory for an integer, and initialize it to 5
    cout <<  a << endl;  // Address of the memory location
    cout << *a << endl;  // Value of a (ie 5)
    delete a;            // Free the memory

    int *arr = new int[5]; // Allocate memory for an array of 5 integers
    for (int i=0; i<5; i++) {arr[i] = i;}
    for (int i=0; i<5; i++) {cout << arr[i] << " ";}
    cout << endl;
    delete[] arr; // Free the memory

    return 0;
}