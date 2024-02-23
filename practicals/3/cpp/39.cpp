#include <iostream>
using namespace std;

class Counter {
    static int count; // Declaration
public:
    Counter()  {count++;}
    ~Counter() {count--;}
    static void Display() {cout << count << endl;}
};
int Counter::count = 0; // Definition


int main() {
    Counter::Display();
    Counter c1;
    Counter::Display();
    Counter c2;
    Counter::Display();
    Counter* c3 = new Counter();
    Counter::Display();
    delete c3;
    Counter::Display();

    return 0;
}