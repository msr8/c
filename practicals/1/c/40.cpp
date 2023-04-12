// Write a program in C to merge two files and write it in a new file
#include <stdio.h>
#include <string.h>


void write(char *filename, char *text) {
    FILE *fptr;

    fptr = fopen(filename, "w");

    fprintf(fptr, "%s", text);
    fclose(fptr);
}


void read(char *filename, char *output) {
    FILE *fptr;
    int  ch;
    int  index=0;

    fptr = fopen(filename, "r");

    while (true) {
        ch = fgetc(fptr);
        if (ch == EOF)    {break;}
        output[index] = ch;
        index++;
    }
    output[index] = NULL;

    fclose(fptr);
}


int main() {
    char fn1[] = "file1.txt";
    char fn2[] = "file2.txt";
    char fn3[] = "file3.txt";
    char out1[100];
    char out2[100];

    read(fn1, out1);
    read(fn2, out2);
    strcat(out1, out2);
    write(fn3, out1);
    
    printf("\n");
}