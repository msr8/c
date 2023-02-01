// WAP in C to show the functionality of ftell() and rewind() functions of file handling
#include <stdio.h>


int main() {
    FILE *fptr;
    char fn[] = "data.txt";
    char x[100];
    int  pos;

    printf("Enter a string: ");
    scanf("%s", x);
    
    fptr = fopen(fn, "w");
    fprintf(fptr, "%s", x);
    fclose(fptr);

    fptr = fopen(fn, "r");
    fgetc(fptr);
    pos = ftell(fptr);
    printf("\nThe pointer is currently at the position %d in the file", pos);

    rewind(fptr);
    pos = ftell(fptr);
    printf("\nThe pointer is currently at the position %d in the file", pos);

    printf("\n");
}