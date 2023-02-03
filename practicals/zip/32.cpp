// WAP to add two numbers with the help of command line arguments 
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int n1, n2;

    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);

    printf("%d + %d = %d", n1, n2, n1+n2);
    
    printf("\n");
}