#include <iostream>
using namespace std;

class Foo {
public:
    int a,b;
    Foo(int x, int y) {a=x, b=y;}
    // Friend function declaration
    friend void swap(Foo &obj);
};

void swap(Foo &obj) {
    int temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;
}



int main() {
    Foo f(1,2);
    cout << "Before swapping: f.a=" << f.a << " f.b=" << f.b << endl;
    swap(f);
    cout << "After swapping:  f.a=" << f.a << " f.b=" << f.b << endl;

    return 0;
}



