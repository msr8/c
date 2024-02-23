#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {}
};

class Derived1 : public Base {
public:
    void print() {cout << "Derived1" << endl;}
};

class Derived2 : public Base {
public:
    void print() {cout << "Derived2" << endl;}
};


int main() {
    Base* obj1 = new Derived1();
    Base* obj2 = new Derived2();

    obj1->print();
    obj2->print();

    return 0;
}