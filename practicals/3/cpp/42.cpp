#include <iostream>
using namespace std;

int add_assign(int& a, int b) {
    a += b;
    return a;
}

int sub_assign(int& a, int b) {
    a -= b;
    return a;
}


int main() {
    int a = 5;
    int b = 2;
    cout << a << " += " << b << " -> " << add_assign(a,b) << endl;
    cout << a << " -= " << b << " -> " << sub_assign(a,b) << endl;

    return 0;
}
