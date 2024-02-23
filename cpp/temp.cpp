#include <iostream>
using namespace std;


class Integer {
    int data;
public:
    Integer(int x) : data(x) {}
    int getData() { return data; }
};

class Character {
    char data;
public:
    Character(Integer x) : data(x.getData()) {}
    char getData() { return data; }
};


int main() {
    Integer a(97);
    Character b = a;

    cout << b.getData() << endl;

    return 0;
}

