#include <iostream>
using namespace std;


class Complex {
    int real, imag;
public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+ (const Complex &other) {
        Complex result(0,0);
        result.real = this->real + other.real;
        result.imag = this->imag + other.imag;
        return result;
    }

    Complex operator- (const Complex &other) {
        Complex result(0,0);
        result.real = this->real - other.real;
        result.imag = this->imag - other.imag;
        return result;
    }

    // String representation of this object
    string toString() {
        return to_string(real) + " + " + to_string(imag) + "i";
    }
};





int main() {
    Complex c1(5, 1);
    Complex c2(3, 4);
    
    cout << "(" << c1.toString() << ") + (" << c2.toString() << ") = (" << (c1 + c2).toString() << ")" << endl;
    cout << "(" << c1.toString() << ") - (" << c2.toString() << ") = (" << (c1 - c2).toString() << ")" << endl;

    return 0;
}