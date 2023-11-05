#include <iostream>
using namespace std;
float pi = 3.14;

void foo() {
    int pi = 3;
    cout << "Local pi  = " << pi   << endl;
    cout << "Global pi = " << ::pi << endl;
}

int main() {
    foo();
    return 0;
}
