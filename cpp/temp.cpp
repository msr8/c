#include <iostream>
using namespace std;


int main() {
    int  x=8;
    int& x_ref=x;
    cout << "x = " << x << " | x_ref = " << x_ref <<endl<<endl;

    cout << "Changing x to 5" <<endl;
    x = 5;
    cout << "x = " << x << " | x_ref = " << x_ref <<endl<<endl;

    cout << "Changing x_ref to 3" <<endl;
    x_ref = 3;
    cout << "x = " << x << " | x_ref = " << x_ref <<endl<<endl;

    return 0;
}