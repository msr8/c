#include <iostream>
using namespace std;


class Base {
public:
    Base()  {cout << "Base constructor" << endl;}
    ~Base() {cout << "Base destructor" << endl;}
};

class Intermediate1 : virtual public Base {
public:
    Intermediate1()  {cout << "Intermediate1 constructor" << endl;}
    ~Intermediate1() {cout << "Intermediate1 destructor" << endl;}
};

class Intermediate2 : virtual public Base {
public:
    Intermediate2()  {cout << "Intermediate2 constructor" << endl;}
    ~Intermediate2() {cout << "Intermediate2 destructor" << endl;}
};

class Derived : public Intermediate1, public Intermediate2 {
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
