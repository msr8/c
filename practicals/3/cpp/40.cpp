// WAP to add and subtract two complex numbers using classes (operator overloading)
#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;
public:
    Complex(int real, int imag) {
        this->real = real;
        this->imag = imag;
    }
    Complex operator-(Complex c) {
        Complex temp(0, 0);
        temp.real = this->real - c.real;
        temp.imag = this->imag - c.imag;
        return temp;
    }
    string display() {
        return to_string(this->real) + "+" + to_string(this->imag) + "i";
    }
};


int main() {
    Complex c1(8, 4);
    Complex c2(3, 2);
    Complex c3 = c1 - c2;
    cout << c1.display() << " - " << c2.display() << " = " << c3.display() << endl;

    return 0;
}