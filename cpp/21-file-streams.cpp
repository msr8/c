#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream f("input.txt", ios::in | ios::out | ios::trunc);;

    string to_write = "Hello World!";
    f << to_write;

    f.seekp(0, ios::beg);
    char ch;
    while(f) {
        ch = f.get();
        cout << ch;
    }

    return 0;
}