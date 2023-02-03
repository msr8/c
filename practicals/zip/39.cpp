// Write a program in C to count a number of words and characters in a file
#include <stdio.h>


int main() {
    FILE *fptr;
    char fn[] = "data.txt";
    int  characters=0;
    int  words=1;
    int  ch;

    fptr = fopen(fn, "r");

    while (ch != EOF) {
        ch = fgetc(fptr);
        if   (ch==' ' or ch=='\n')    { words ++; }
        else                          { characters++; }
    }
    
    printf("%s contains %d words spanning a total of %d characters", fn, words, characters);

    printf("\n");
}