#include <iostream>
using namespace std;


template<class T1, class T2>
class Foo {
    T1 a;
    T2 b;
public:
    Foo(T1 x, T2 y) : a(x), b(y) {}
};


template<class T>
T add(T a, T b) {
    T ret = a+b;
    return ret;
}


template<class T1, class T2>
void display(T1 a, T2 b) {
    cout << a << " " << b << endl;
}



int main() {
    Foo <int,float> f(5, 7.8);

    cout << add(5, 6) << endl;

    display(5.0, "okay");
    display(5.3f, true);

    return 0;
}