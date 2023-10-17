#include <iostream>
using namespace std;
class Bar;

class Foo {
    int data;
public:
    Foo(int x) {data=x;}
    friend void display(Foo foo, Bar bar);
    friend void swap(Foo *foo, Bar *bar);
};

class Bar {
    int data;
public:
    Bar(int x) {data=x;}
    friend void display(Foo foo, Bar boo);
    friend void swap(Foo *foo, Bar *boo);
};


void display(Foo foo, Bar bar) {
    cout << "Value of foo.data: " << foo.data << endl;
    cout << "Value of bar.data: " << bar.data << endl; 
}

void swap(Foo *foo, Bar *bar) {
    int temp = foo->data;
    foo->data = bar->data;
    bar->data = temp;
}



int main() {
    Foo f(1);
    Bar b(7);
    
    cout << "Before swapping:" << endl;
    display(f,b);
    
    swap(&f, &b);
    cout << endl;
    
    cout << "After swapping: " << endl;
    display(f,b);

    return 0;
}