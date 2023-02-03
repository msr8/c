// WAP in C to show the functionality of fseek function
#include <stdio.h>


int main() {
    FILE *fptr;
    char fn[] = "data.txt";
    char x[100];
    int  offset;
    int  ch;

    printf("Enter a string: ");
    scanf("%s", x);
    
    fptr = fopen(fn, "w");
    fprintf(fptr, "%s", x);
    fclose(fptr);

    fptr = fopen(fn, "r");
    printf("Enter the offset value: ");
    scanf("%d", &offset);
    fseek(fptr, offset, SEEK_SET);
    ch = fgetc(fptr);
    fclose(fptr);

    printf("\ncharacter at offset %d is %c", offset, ch);

    printf("\n");
}