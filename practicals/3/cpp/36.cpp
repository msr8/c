#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    FILE *fp1, *fp2;
    int n;
    fp1 = fopen(argv[1], "w");
    fp2 = fopen(argv[2], "w");

    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            fprintf(fp1, "%d ", arr[i]);
        } else {
            fprintf(fp2, "%d ", arr[i]);
        }
    }
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}