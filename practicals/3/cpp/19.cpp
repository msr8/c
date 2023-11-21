#include <iostream>
using namespace std;

class Base {
public:
    void display(int x) {
        cout << "Level1: " << x << endl;
    }
};

class Intermediate : public Base {
public:
    void display(float x) {
        cout << "Level2: " << x << endl;
    }
};

class Derived : public Intermediate {
public:
    void display() {
        cout << "Level3 " << endl;
    }
};


int main() {
    Derived obj;

    // To resolve ambiguity, specify the class scope
    obj.Base::display(4);
    obj.Intermediate::display(4.5f);
    obj.display();

    return 0;
}