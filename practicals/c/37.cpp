// WAP to create and store information in a data file (using getw and putw functions)
#include <stdio.h>
#include <string.h>


int main() {
    FILE *fptr;
    char fn[] = "data.bin";
    char x[100];
    char x_read[100];
    int  x_len;
    int  ch;
    int  index=0;
    
    printf("Enter a string: ");
    scanf("%s", x);
    x_len = strlen(x);

    fptr = fopen(fn, "wb");
    for (int i=0; i<x_len; i++) {
        putw(x[i], fptr);
    }
    fclose(fptr);
    
    fptr = fopen(fn, "rb");
    while (ch != EOF) {
        ch = getw(fptr);
        x_read[index] = ch;
        index++;
    }
    fclose(fptr);
    
    printf("\nData in %s: %s", fn, x_read);

    printf("\n");
}