#include <iostream>
using namespace std;

class Base {
public:
    Base()  {cout << "Base constructor" << endl;}
    ~Base() {cout << "Base destructor" << endl;}
};

class Intermediate : public Base {
public:
    Intermediate()  {cout << "Intermediate constructor" << endl;}
    ~Intermediate() {cout << "Intermediate destructor" << endl;}
};

class Derived : public Intermediate {
public:
    Derived()  {cout << "Derived constructor" << endl;}
    ~Derived() {cout << "Derived destructor" << endl;}
};


int main() {
    Derived* obj = new Derived();
    cout<<endl;
    delete obj;

    return 0;
}