#include <iostream>
using namespace std;


class Foo {
    int pvt;
public:
    // Initialiser/COnstructor
    Foo() {pvt=0;}
    // Call by reference
    void add_10(int& a) {a+=10;}
    // Return by reference
    int& get_pvt() {return pvt;}
    // Print pvt
    void print_pvt() {cout << "pvt: " << pvt << endl;}
};


int main() {
    Foo obj;

    // Get a reference to the private variable
    int& pvt_ref = obj.get_pvt();
    obj.print_pvt();

    // Change the value of the private variable via its reference
    pvt_ref = 5;
    obj.print_pvt();

    // Add 10 to the private variable
    obj.add_10(pvt_ref);
    obj.print_pvt();

    return 0;
}