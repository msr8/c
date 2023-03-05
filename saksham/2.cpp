// WAP to create and display a text file
#include <stdio.h>

int main() {
    char text[100];
    char out[100];
    FILE *fptr;

    fptr = fopen("file.txt", "w");
    
    printf("Enter a word: ");
    scanf("%s", text);

    fprintf(fptr, "%s", text);
    fclose(fptr);

    fptr = fopen("file.txt", "r");
    printf("\nContents of file.txt: %s", fgets(out, 100, fptr));
    fclose(fptr);

    printf("\n");
}
