// WAP to print the following patterns using loops:
// *       1       55555   A
// **      12      4444    AB
// **      123     333     ABC
// ****    1234    22      ABCD
// *****   12345   1       ABCDE
#include <stdio.h>
#define  n 5


void _1() {
    int j;
    for (int i=1; i<n+1; i++) {
        for (j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


void _2() {
    int j;
    for (int i=1; i<n+1; i++) {
        for (j=1; j<i+1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}


void _3() {
    int j;
    for (int i=n; i>0; i--) {
        for (j=0; j<i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}


void _4() {
    int j;
    for (int i=1; i<n+1; i++) {
        for (j=1; j<i+1; j++) {
            printf("%c", j+64);
        }
        printf("\n");
    }
}


int main() {

    _1();
    printf("\n");
    _2();
    printf("\n");
    _3();
    printf("\n");
    _4();

    printf("\n");
}