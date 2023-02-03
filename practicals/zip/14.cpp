// WAP to check whether the input character is a vowel or not using switch case
#include <stdio.h>


int main() {
    char x;
    bool isVow=false;

    printf("Enter a chracter: ");
    scanf(" %c", &x);

    switch(x) {
        case 'a':
            isVow = true;
            break;
        case 'A':
            isVow = true;
            break;
        case 'e':
            isVow = true;
            break;
        case 'E':
            isVow = true;
            break;
        case 'i':
            isVow = true;
            break;
        case 'I':
            isVow = true;
            break;
        case 'o':
            isVow = true;
            break;
        case 'O':
            isVow = true;
            break;
        case 'u':
            isVow = true;
            break;
        case 'U':
            isVow = true;
            break;
    }

    printf("\n\n%c is a ", x);
    isVow ? printf("vowel") : printf("consonant");

    printf("\n");
}
