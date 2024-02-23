#include <stdio.h>
#include <stdlib.h>


int main( int argc, char *argv[] )
{
    FILE *fptr;
    char out[1000];
    char ch;
    int  index=0;

    fptr = popen("ls /Users/mark", "r");

    // Checks if there was an error in running the command
    if (fptr == NULL) {
      printf("Failed to run command\n" );
      exit(1);
    }

    // Read the output
    do {
        ch = fgetc(fptr);    // Gets the character the pointer is at
        out[index] = ch;     // Inserts the character into the string
        index++;             // Increases the index
    }
    while (ch != EOF);       // Stops the loop if the file ends

    pclose(fptr);            // Close
    printf("%s", out);



    printf("\n");
}


