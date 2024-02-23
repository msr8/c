#include <iostream>
using namespace std;

class Centimeter;


class Meter {
    float data;
public:
    Meter(float x): data(x) {}
    Meter(Centimeter x); // Define this later because it uses Centimeter which is currently an "incomplete class"
    float get_data() {return this->data;}
};

class Centimeter {
    float data;
public:
    Centimeter(float x): data(x) {}
    Centimeter(Meter x): data(x.get_data()*100) {}
    float get_data() {return this->data;}
};


Meter::Meter(Centimeter x): data(x.get_data()/100) {}


int main() {
    Meter m(5);
    Centimeter c(75);
    cout << m.get_data() << "m   = " << Centimeter(m).get_data() << "cm" << endl;
    cout << c.get_data() << "cm = " << Meter(c).get_data() << "m" << endl;

    return 0;
}