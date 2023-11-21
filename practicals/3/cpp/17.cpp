#include <iostream>
using namespace std;

class Parent {
    int private_attr;
protected:
    int protected_attr;
public:
    int public_attr;

    Parent(int x) {
        private_attr   = x;
        protected_attr = x;
        public_attr    = x;
    }
};


class Child : public Parent {
public:
    Child(int x) : Parent(x) {}
    void display() {
        cout << "public_attr:    " << public_attr << endl;
        cout << "protected_attr: " << protected_attr << endl;
    }
};


int main() {
    Child c(5);
    c.display();

    return 0;
}