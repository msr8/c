// WAP to copy one string into another
#include <stdio.h>

void copystring(char *src, char *dest) {
    int i = 0;
    int ch;

    while (true) {
        ch      = src[i];
        dest[i] = ch;
        if (ch == '\0') {
            break;
        }
        i++;
    }
}

int main() {
    char s1[100] = "Hello";
    char s2[100];

    printf("Before function:\ns1: %s\ns2: %s\n\n", s1, s2);
    copystring(s1, s2);
    printf("After function:\ns1: %s\ns2: %s\n\n", s1, s2);

    printf("\n");
}