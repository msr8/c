#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int real, int imag): real(real), imag(imag) {}

    string display() {
        return to_string(real) + "+" + to_string(imag) + "i";
    }

    Complex operator+(Complex obj) {
        Complex temp(0, 0);
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    Complex operator-(Complex obj) {
        Complex temp(0, 0);
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }
};


int main() {
    Complex obj1(6, 3);
    Complex obj2(3, 1);

    Complex obj3 = obj1 + obj2;
    Complex obj4 = obj1 - obj2;

    cout << obj1.display() << " + " << obj2.display() << " = " << obj3.display() << endl;
    cout << obj1.display() << " - " << obj2.display() << " = " << obj4.display() << endl;

    return 0;
}