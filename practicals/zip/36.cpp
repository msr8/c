// WAP to create and store information in a data file(using fgets and fputs functions)
#include <stdio.h>


int main() {
    FILE *fptr;
    char fn[] = "data.bin";
    char x[100];
    char x_read[100];
    
    printf("Enter a string: ");
    scanf("%s", x);

    fptr = fopen(fn, "w");
    fputs(x, fptr);
    fclose(fptr);
    
    fptr = fopen(fn, "r");
    fgets(x_read, 100, fptr);
    fclose(fptr);
    
    printf("\nData in %s: %s", fn, x_read);

    printf("\n");
}