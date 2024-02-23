#include <iostream>
using namespace std;

inline int Double(int target) {
    return target * 2;
}

int main() {
    int x = 5;
    cout << "Double of " << x << " is " << Double(x) << endl;

    return 0;
}
