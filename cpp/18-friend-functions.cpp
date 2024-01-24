// A friend function can be granted special access to private and protected members of a class in C++. They are the non-member functions that can
// access and manipulate the private and protected members of the class for they are declared as friends
#include <iostream>
using namespace std;

class Foo {
    int private_attr;
protected:
    int protected_attr;
public:
    int public_attr;
    Foo() {
        private_attr   = 1;
        protected_attr = 2;
        public_attr    = 3;
    }

    friend void friend_func(Foo f);
};

void friend_func(Foo f) {
    cout << f.private_attr   << endl;
    cout << f.protected_attr << endl;
    cout << f.public_attr    << endl;
}



int main() {
    Foo f;
    friend_func(f);

    return 0;
}
