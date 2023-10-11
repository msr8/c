#include <iostream>
using namespace std;

class Foo {
    static int count; // Declaration of static data member

    public:
        // Constructor
        Foo()  {count++;}
        // Destructor
        ~Foo() {count--;}
        // This is a static member function accessing a static data member. It can be called with or without an instance of Foo
        static int getCount_static() {return count;};
};
int Foo::count = 0; // Definition of static data member




int main() {
    cout << "Number of objects: " << Foo::getCount_static() << endl;

    Foo *f1 = new Foo();
    Foo *f2 = new Foo();
    Foo *f3 = new Foo();
    cout << "Number of objects: " << f1->getCount_static() << endl;

    delete f1;
    cout << "Number of objects: " << Foo::getCount_static() << endl;

    return 0;
}