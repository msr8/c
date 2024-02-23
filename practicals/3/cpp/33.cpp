#include <iostream>
using namespace std;

template <class T>
void swap_values(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}


int main() {
    int a = 5, b = 3;
    cout << "Before swapping: " << a << " " << b << endl;
    swap_values(a, b);
    cout << "After swapping: " << a << " " << b << endl;

    cout << endl;

    float c = 5.5, d = 3.3;
    cout << "Before swapping: " << c << " " << d << endl;
    swap_values(c, d);
    cout << "After swapping: " << c << " " << d << endl;

    return 0;
}



