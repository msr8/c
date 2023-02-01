// WAP to show the use of following directives #IF, #ELSE and #ENDIF in C
#include <stdio.h>
#define NUMBER 100


int main() {
    #if NUMBER < 0
        printf("NUMBER is negative\n");
    #elif NUMBER == 0
        printf("NUMBER is zero\n");
    #else
        printf("NUMBER is positive\n");
    #endif
   
    printf("\n");
}