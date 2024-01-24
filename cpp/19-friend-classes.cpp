// A friend class can access private and protected members of other classes in which it is declared as a friend. It is sometimes useful to allow
// a particular class to access private and protected members of other classes. For example, a LinkedList class may be allowed to access private
// members of Node
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
    void func(Foo f) {
        cout << f.private_attr   << endl;
        cout << f.protected_attr << endl;
        cout << f.public_attr    << endl;
    }
};



int main() {
    Foo f;
    FriendClass fc;
    fc.func(f);

    return 0;
}