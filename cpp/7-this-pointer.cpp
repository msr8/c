#include <iostream>
using namespace std;

class Foo {
private:
    int c;

public:
    Foo(int a, int b) {
        this->c = this->sum(a, b);
    }

    // Notice how we have to use Foo& for method chaining. We can also use Foo*, and then we will have to:
    // use -> instead of . in the main function
    // return `this` instead of return `*this` in the methods
    Foo& add5() {
        c += 5;
        cout << "add5():    " << c << endl;
        return *this;
    }
    Foo& reduce5() {
        c -= 5;
        cout << "reduce5(): " << c << endl;
        return *this;
    }

    int sum(int a, int b) {return a+b;}
};

int main() {
    Foo obj(1, 2);
    // Method chaining
    obj.add5().reduce5();

    return 0;
}
