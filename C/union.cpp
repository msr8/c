#include <stdio.h>
#include <string.h>


union testUnion {
    int  a;
    char b[10];
    bool c;
};


int main() {
    testUnion x;

    printf("Size of x: %lu bytes\n\n", sizeof(x));
    x.a = 87;
    printf("x: %d\n", x.a);
    strcpy(x.b, "hola");
    printf("x: %s\n", x.b);
    x.c = true;
    printf("x: %d\n", x.c);

    printf("\n");
}