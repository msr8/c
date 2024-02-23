#include <iostream>
#include <string>
using namespace std;

int main() {
    int    a = 97;
    float  b = 3.14;
    double c = 3.14159265358979323846;
    char   d = 'A';
    string e = "Hello World!";
    bool   f = true;

    cout << "This is an integer:  " << a << endl;
    cout << "This is a float:     " << b << endl;
    cout << "This is a double:    " << c << endl;
    cout << "This is a character: " << d << endl;
    cout << "This is a string:    " << e << endl;
    cout << "This is a boolean:   " << f << endl;

    // Datatype conversion
    cout << "\n";
    cout << "double to float: " << float(c)     << endl;
    cout << "float to int:    " << int(b)       << endl;
    cout << "int to char:     " << char(a)      << endl;
    cout << "int to string:   " << to_string(a) << endl;

    // stoi (string to integer)
    cout << "\n";
    cout << "stoi(\"123\")    = " << stoi("123") << endl;
    cout << "stoi(\"-123\")   = " << stoi("-123") << endl;
    cout << "stoi(\"123.45\") = " << stoi("123.45") << endl;
    cout << "stoi(\"123abc\") = " << stoi("123abc") << endl;

    return 0;
}