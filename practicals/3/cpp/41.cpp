#include <iostream>
using namespace std;

class Integer {
    int data;
public:
    Integer(int x): data(x) {}

    Integer operator+(const Integer& other) {
        Integer temp(data+other.data);
        return  temp;
    }

    string display() {return to_string(this->data);}
    friend Integer add_ints(Integer a, Integer b);
};

Integer add_ints(Integer a, Integer b) {
    Integer temp(a.data+b.data);
    return  temp;
}


int main() {
    Integer a(5);
    Integer b(2);
    cout << a.display() << " + " << b.display() << " = " << (a+b).display() << endl;
    cout << a.display() << " + " << b.display() << " = " << add_ints(a,b).display() << endl;

    return 0;
}

