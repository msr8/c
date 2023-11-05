#include <iostream>
using namespace std;

class Foo {
    int data;
public:
    static int count; // Declaration

    Foo(int data) {
        this->data = data;
        count++;
    }
    ~Foo() {count--;}

    int getCount() {return count;} // This is not static, so it can only be called with an instance of Foo
    static int getCount_static(); // Made this static so that it can be called without an instance of Foo
};

int Foo::getCount_static() {return count;} // Not to specify storage class (static) again. Defined this outside the class to not make it inline



int Foo::count = 0; // Definition
int main() {
    cout << Foo::getCount_static() << endl;
    Foo f1(1);
    Foo *f2 = new Foo(2);
    Foo *f3 = new Foo(3);
    cout << Foo::getCount_static() << endl;
    cout << f1.getCount_static() << endl;
    cout << f1.getCount() << endl;
    delete f2;
    cout << Foo::count << endl;
    return 0;
}