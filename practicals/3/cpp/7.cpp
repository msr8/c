#include <iostream>
using namespace std;

class Foo {
public:
    int data;
    Foo(int a) {data=a;}
};


int main() {
    Foo arr[5] = {Foo(1), Foo(2), Foo(3), Foo(4), Foo(5)};

    for (int i=0; i<5; i++) {
        cout << arr[i].data << endl;
    }

    return 0;
}