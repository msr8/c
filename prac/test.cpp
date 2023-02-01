#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char* hex2bin(char x){
    switch(x){
        case '0': return "0000";
        case '1': return "0001";
        case '2': return "0010";
        case '3': return "0011";
        case '4': return "0100";
        case '5': return "0101";
        case '6': return "0110";
        case '7': return "0111";
        case '8': return "1000";
        case '9': return "1001";
        case 'A': return "1010";
        case 'B': return "1011";
        case 'C': return "1100";
        case 'D': return "1101";
        case 'E': return "1110";
        case 'F': return "1111";
    }

    return "okay";
}

int main()
{
    char s[100];
    char bin[strlen(s)*4];
    printf("Write a program to convert hexadecimal no. into a binary n\n\n");
    printf("Enter a hexadecimal number\n");

    scanf("%s", s);

    for (int i=0;s[i]!='\0';i++){
        strcat(bin,hex2bin(s[i]));
    }
    printf("\n%s in binary is %s",s,bin);
    printf("\n");
    return 0;
}