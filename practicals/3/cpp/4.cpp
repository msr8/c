#include <iostream>
using namespace std;


class Operations {
    int a,b;

public:
    Operations(int x, int y) {
        a = x;
        b = y;
    }
    int   add()      {return a+b;}
    int   subtract() {return a-b;}
    int   multiply() {return a*b;}
    float divide()   {return (float)a/b;}

    void performOperations() {
        cout << a << " + " << b << " = " << add() << endl;
        cout << a << " - " << b << " = " << subtract() << endl;
        cout << a << " * " << b << " = " << multiply() << endl;
        cout << a << " / " << b << " = " << divide() << endl;
    }
};



int main() {
    Operations obj = Operations(5, 3);
    obj.performOperations();

    return 0;
}