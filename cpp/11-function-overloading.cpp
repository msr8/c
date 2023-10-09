#include <iostream>
using namespace std;

int    add(int a, int b)       {return a+b;}
float  add(float a, float b)   {return a+b;}
string add(string a, string b) {return a+b;}

int main() {
    cout << add(1, 2) << endl;
    cout << add(1.5f, 2.5f) << endl;
    cout << add("Hello ", "World") << endl;

    return 0;
}
