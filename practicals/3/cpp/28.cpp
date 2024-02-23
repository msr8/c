#include <iostream>
using namespace std;

class Integer {
    int data;
public:
    Integer(int data): data(data) {}

    Integer operator+(Integer obj) {
        Integer temp(data + obj.data);
        return temp;
    }

    bool operator>(Integer obj) {
        return data > obj.data;
    }

    bool operator<(Integer obj) {
        return data < obj.data;
    }

    string display() {
        return to_string(data);
    }
};


int main() {
    Integer obj1(6);
    Integer obj2(3);

    Integer obj3 = obj1 + obj2;

    cout << obj1.display() << " + " << obj2.display() << " = " << obj3.display() << endl;
    cout << obj1.display() << " > " << obj2.display() << " = " << (obj1 > obj2) << endl;
    cout << obj1.display() << " < " << obj2.display() << " = " << (obj1 < obj2) << endl;

    return 0;
}