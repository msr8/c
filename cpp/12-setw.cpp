#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a = 143;

    cout << "a = " << a << endl;
    cout << "a = " << setw(5) << a << endl;
    cout << "a = " << setw(5) << setfill('0') << a << endl;
    cout << "a = " << setw(5) << setfill('x') << a << endl;

    return 0;
}
