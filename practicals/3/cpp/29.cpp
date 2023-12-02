#include <iostream>
using namespace std;

class String {
    string data;
public:
    friend ostream& operator<<(ostream& out, String obj);
    friend istream& operator>>(istream& in, String& obj);
};

ostream& operator<<(ostream& out, String obj) {
    out << obj.data;
    return out;
}

istream& operator>>(istream& in, String& obj) {
    in >> obj.data;
    return in;
}


int main() {
    String str;

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    return 0;
}