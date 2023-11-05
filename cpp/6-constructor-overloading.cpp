#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    // Do nothing constructor/Default constructor
    Complex() {}
    // Parameterized constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
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
    Complex c4;     // Do nothing constructor

    return 0;
}