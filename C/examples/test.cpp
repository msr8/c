#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    char out1[1000], text[1000];
    char ch;
    int  index=0;
    int  i;



    fptr = fopen("out-in.txt", "r");

    // Read the output
    index = 0;
    do {
        ch = fgetc(fptr);
        text[index] = ch;
        index++;
    }
    while (ch != EOF);
    text[index-1] = '\0';

    fclose(fptr);


    char text2[1000];
    strcpy(text2, text);
    // https://www.geeksforgeeks.org/how-to-split-a-string-in-cc-python-and-java/
    char * token = strtok(text2, "\n");
    while (token != NULL) {
        // Checks if it contains "All User Profile"
        if (strstr(token, "All User Profile") != NULL)    {printf("%s\n", token);}


        token = strtok(NULL, "\n");
    }




    printf("\n");
}
