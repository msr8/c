#include <iostream>
// #include <string>
using namespace std;




int main() {
    string s1;
    string s2;
    s1 = "Hello ";
    s2 = "World!";

    cout << s1 << s2 << endl;

    // Concatenation (via addition)
    string s3 = s1 + s2;
    cout << "Concatenation via addition:  " << s3 << endl;

    // Concatenation (via .append())
    s1.append(s2);
    cout << "Concatenation via .append(): " << s1 << endl;

    // Length (via .length() and .size())
    cout << "Length of the string \"" << s1 << "\" is " << s1.length() << endl;
    cout << "Length of the string \"" << s2 << "\" is " << s1.size()   << endl;

    // Indexing (via getline())
    string s4;
    cout << "\n\nEnter a sentence: ";
    getline(cin, s4);
    cout << "You entered: " << s4 << endl;


    return 0;
}