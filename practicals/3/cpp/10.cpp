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

    friend class FriendClass;
};

class FriendClass {
public:
    void display_attrs(Foo f) {
        cout << "Private attribute:   " << f.private_attr   << endl;
        cout << "Protected attribute: " << f.protected_attr << endl;
        cout << "Public attribute:    " << f.public_attr    << endl;
    }
};



int main() {
    Foo f;
    FriendClass fc;
    fc.display_attrs(f);
    return 0;
}