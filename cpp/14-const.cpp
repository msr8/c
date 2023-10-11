#include <iostream>
using namespace std;


void print_arr(const int *arr, int size) {
    cout << "[" << arr[0];
    for (int i = 1; i < size; i++) {
        cout << ", " << arr[i];
    }
    cout << "]" << endl;
}

void modify_arr(const int *arr, int size) {
    for (int i = 1; i < size; i++) {
        arr[i] *= 2;
    }
}




int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    print_arr(arr, 5);
    // This will not compile:
    modify_arr(arr, 5);

    return 0;
}