#include <iostream>
using namespace std;


class complex {
    int real, imag;
public:
    // Default constructor
    complex() {
        real = 0;
        imag = 0;
    }
    // Parameterized constructor
    complex(int r, int i) {
        real = r;
        imag = i;
    }
    // Copy constructor
    complex(complex &c) {
        real = c.real;
        imag = c.imag;
    }
    string toString() {return to_string(real) + " + " + to_string(imag) + "i";}
};


int main() {
    complex c1;
    complex c2(3, 9);
    complex c3(c2);

    cout << "Default constructor (c1): " << c1.toString() << endl;
    cout << "Parameterized constructor (c2): " << c2.toString() << endl;
    cout << "Copy constructor (c3): " << c3.toString() << endl;

    return 0;
}