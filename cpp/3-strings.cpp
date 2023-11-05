#include <iostream>
// #include <string>
using namespace std;




int main() {
    string s1;
    string s2;
    s1 = "Hello ";
    s2 = "World!";
    // Copying, they both have different memory locations
    string s3 = s1;

    cout << s1 << s2 << endl;

    // Concatenation (via addition)
    string s4 = s1 + s2;
    cout << "Concatenation via addition:  " << s4 << endl;

    // Concatenation (via .append())
    s1.append(s2);
    cout << "Concatenation via .append(): " << s1 << endl;

    // Length (via .length() and .size())
    cout << "Length of the string \"" << s1 << "\" is " << s1.length() << endl;
    cout << "Length of the string \"" << s2 << "\" is " << s1.size()   << endl;

    // Inputing (via getline())
    string s5;
    cout << "\n\nEnter a sentence: ";
    getline(cin, s5);
    cout << "You entered: " << s5 << endl;


    return 0;
}