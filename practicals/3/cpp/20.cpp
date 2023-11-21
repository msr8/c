#include <iostream>
using namespace std;

class Foo {
public:
    void display()        {cout << "No arguments" << endl;}
    void display(int x)   {cout << "Integer: " << x << endl;}
    void display(float x) {cout << "Float:   " << x << endl;}
};

int main() {
    Foo obj;

    obj.display();
    obj.display(4);
    obj.display(4.5f);

    return 0;
}