#include <iostream>
using namespace std;

class Foo {
public:
    Foo()  {cout << "Object has been created"   << endl;}
    ~Foo() {cout << "Object has been destroyed" << endl;}
};

int main() {
    Foo* obj = new Foo();
    delete obj;

    return 0;
}