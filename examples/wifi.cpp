#include <stdio.h>
#include <stdlib.h>



// // Did * before the func name cause its gonna return an array, https://flaviocopes.com/c-return-string/
// char *readout(FILE *fptr) {
//     char out[1000] = "";
//     char ch;
//     int  index=0;

//     // Checks if there was an error in running the command
//     if (fptr == NULL) {
//       printf("Failed to run command\n" );
//       exit(1);
//     }

//     // Read the output
//     do {
//         ch = fgetc(fptr);    // Gets the character the pointer is at
//         out[index] = ch;     // Inserts the character into the string
//         index++;             // Increases the index
//     }
//     while (ch != EOF);       // Stops the loop if the file ends

//     return out;
// }


int main( int argc, char *argv[] )
{
    FILE *fptr;
    char out1[1000], out2[1000];
    char ch;
    int  index=0;
    int  i;

    // // Checks if we are not on a windows machine
    // #ifndef _WIN32
    //     printf("Not working on windows\n");
    //     return 0;
    // #endif


    fptr = popen("ls /Users/mark/school", "r");

    // Read the output
    index = 0;
    do {
        ch = fgetc(fptr);
        out1[index] = ch;
        index++;
    }
    while (ch != EOF);
    out1[index-1] = '\0';

    pclose(fptr);


    // Write it
    fptr = fopen("out.txt", "w");
    fprintf(fptr, "%s", out1);
    fclose(fptr);




    // fptr = popen("cat /Users/mark/school/examples/q2.cpp", "r");

    // // Read the output
    // index = 0;
    // do {
    //     ch = fgetc(fptr);
    //     out2[index] = ch;
    //     index++;
    // }
    // while (ch != EOF);

    // // Print and close
    // printf("%s", out2);
    // pclose(fptr);

    



    printf("\n");
}


