#include <iostream>
using namespace std;

class Foo {
    int x;
    int y;
public:
    Foo(int x, int y) : x(x), y(y) {}
    void display() {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
};


int main() {
    Foo obj(4, 5);
    obj.display();

    return 0;
}