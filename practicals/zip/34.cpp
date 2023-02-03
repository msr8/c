// WAP to create and store information in a binary file (using fread and fwrite functions)
#include <stdio.h>
#include <string.h>


int main() {
    FILE *fptr;
    char fn[] = "data.bin";
    char x[100];
    char x_read[100];
    
    printf("Enter a string: ");
    scanf("%s", x);

    fptr = fopen(fn, "w");
    fwrite(x, sizeof(char), strlen(x), fptr);
    fclose(fptr);
    
    fptr = fopen(fn, "r");
    fread(x_read, sizeof(char), strlen(x), fptr);
    fclose(fptr);
    
    printf("\nData in %s: %s", fn, x_read);

    printf("\n");
}