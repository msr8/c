#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    // Do nothing constructor
    Complex() {}
    // Default constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    // Parameterized constructor
    Complex(int r) {
        real = r;
        imag = 0;
    }
    // Copy constructor
    Complex(const Complex& c) {
        real = c.real;
        imag = c.imag;
    }
};


int main() {
    Complex c1(1, 2); // Parameterized constructor
    Complex c2(c1);  // Copy constructor
    Complex c3(1);  // Parameterized constructor
    Complex c4;    // Do nothing constructor

    return 0;
}