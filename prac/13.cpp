// WAP to convert hexadecimal number into a binary number
#include <stdio.h>
#include <string.h>


const char *chhex2bin(char x) {
    switch (x) {
        case '0':    return "0000";
        case '1':    return "0001";
        case '2':    return "0010";
        case '3':    return "0011";
        case '4':    return "0100";
        case '5':    return "0101";
        case '6':    return "0110";
        case '7':    return "0111";
        case '8':    return "1000";
        case '9':    return "1001";
        case 'A':    return "1010";
        case 'B':    return "1011";
        case 'C':    return "1100";
        case 'D':    return "1101";
        case 'E':    return "1110";
        case 'F':    return "1111";
        default:     return "invalid";
    }

}


int main() {
    char x[100];
    int  x_len;
    char x_bin[400]="";

    printf("Enter a hexadecimal value: ");
    scanf(" %s", x);

    x_len = strlen(x);
    for (int i=0; i<x_len; i++) {
        strcat(x_bin, chhex2bin(x[i]));
    }

    printf("\n%s in binary is %s", x, x_bin);

    printf("\n");
}
