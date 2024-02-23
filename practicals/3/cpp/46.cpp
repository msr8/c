#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("text.txt");
    char ch;
    int digits = 0, alphabets = 0, spaces = 0;
    while (fin >> noskipws >> ch) {
        if      (isdigit(ch)) digits++;
        else if (isalpha(ch)) alphabets++;
        else if (isspace(ch)) spaces++;
    }
    cout << "Digits:    " << digits << endl;
    cout << "Alphabets: " << alphabets << endl;
    cout << "Spaces:    " << spaces << endl;

    return 0;
}