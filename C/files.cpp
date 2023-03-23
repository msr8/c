# include <stdio.h>


void write(char *filename, char *text) {
    FILE *fptr;

    fptr = fopen(filename, "w");

    fprintf(fptr, "%s", text);      // Just like printf(), but with an extra param, ie the file pointer
    fclose(fptr);
}


void read(char *filename) {
    FILE *fptr;
    char text[100];
    int  ch;                 // Don't change int to char, else problems when comparing with EOF
    int  index=0;

    fptr = fopen(filename, "r");

    while (ch != EOF) {      // Stops the loop if end of file reached
        ch = fgetc(fptr);    // Gets the character the pointer is at
        text[index] = ch;    // Inserts the character into the string
        index++;             // Increases the index
    }

    fclose(fptr);

    printf("%s", text);
}




int main() {
    char filename[] = "testfile.txt";
    char text[]     = "Line 1\nLine 2 lol";

    write(filename, text);
    read(filename);

    printf("\n");
}

