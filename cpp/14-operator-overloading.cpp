#include <iostream>
using namespace std;

class Vector {
public:
    int a,b,c;
    Vector(int x, int y, int z) {a=x, b=y, c=z;} 

    Vector operator+(const Vector &other) {
        Vector result(0,0,0);
        result.a = this->a + other.a;
        result.b = this->b + other.b;
        result.c = this->c + other.c;
        return result;
    }
};


int main() {
    Vector v1(1,2,3);
    Vector v2(4,5,6);
    Vector v3 = v1 + v2;
    cout << v3.a << " " << v3.b << " " << v3.c << endl;
    return 0;
}