#include <stdio.h>
#define A 10
#define B 20
#define SUM(a,b)    (a+b)
#define GREET(a)    printf("Hello " #a ". Have fun!")

#undef  B



int main(){
    #ifdef A
        printf("A is defined\n");
    #else
        printf("A is not defined\n");
    #endif

    #ifdef B
        printf("B is defined\n");
    #else
        printf("B is not defined\n");
    #endif

    printf("\nSUM(1,3) = %d\n", SUM(1,3));
    GREET(mark);

    printf("\n");
}