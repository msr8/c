// WAP to create and store information in a text file (using fprintf and fscanf functions)
#include <stdio.h>


int main() {
    FILE *fptr;
    char fn[] = "data.txt";
    char x[100];
    char x_read[100];
    
    printf("Enter a string: ");
    scanf("%s", x);

    fptr = fopen(fn, "w");
    fprintf(fptr, "%s", x);
    fclose(fptr);
    
    fptr = fopen(fn, "r");
    fscanf(fptr, "%s", x_read);
    fclose(fptr);
    
    printf("\nData in %s: %s", fn, x_read);
    
    printf("\n");
}