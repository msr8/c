#include <iostream>
using namespace std;

class Integer {
    int data;
public:
    Integer(int data): data(data) {}

    Integer operator+=(Integer obj) {
        data += obj.data;
        return *this;
    }

    Integer operator-=(Integer obj) {
        data -= obj.data;
        return *this;
    }

    string display() {
        return to_string(data);
    }
};


int main() {
    Integer obj1(6);
    Integer obj2(3);

    obj1 += obj2;
    obj1 -= obj2;

    cout << obj1.display() << endl;

    return 0;
}