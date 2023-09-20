#include <iostream>
using namespace std;

class Foo {
    int data;
    static int count; // Declaration

    public:
        Foo(int data) {
            this->data = data;
            count++;
        }
        static int getCount_static() {return count;} // Made this static so that it can be called without an instance of Foo  
        int getCount() {return count;} // This is not static, so it can only be called with an instance of Foo
};


int Foo::count = 0; // Definition
int main() {
    cout << Foo::getCount_static() << endl;
    Foo f1(1);
    Foo f2(2);
    Foo f3(3);
    cout << Foo::getCount_static() << endl;
    cout << f1.getCount() << endl;
    return 0;
}