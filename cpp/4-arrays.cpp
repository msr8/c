#include <iostream>
using namespace std;

int main() {
    int   arr[5]       = {1, 2, 3, 4, 5};
    int*  arr_ptr      = new int[5];
    int   arr_2d[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int** arr_2d_ptr   = new int*[2]; // Creating an array of 2 integer pointers
    arr_2d_ptr[0]      = new int[3];  // Creating an array of 3 integers (row 1)
    arr_2d_ptr[1]      = new int[3];  // Creating an array of 3 integers (row 2)

    return 0;
}