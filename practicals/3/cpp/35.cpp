#include <iostream>
using namespace std;

int main() {
    FILE *fp1, *fp2;
    char c1[100], c2[100];
    fp1 = fopen("Country.txt", "r");
    fp2 = fopen("Capitals.txt", "r");
    
    while (fscanf(fp1, "%s", c1) != EOF && fscanf(fp2, "%s", c2) != EOF) {
        cout << c1 << " " << c2 << endl;
    }
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}