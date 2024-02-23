#include <stdio.h>
#include <string.h>



void _0() {
    char a[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    char b[12] = "Hello World";
    char *c    = "Hello World";

    printf("a: %s\n", a);
    printf("b: %s\n", a);
    printf("c: %s\n", a);
}


void _1() {
    char str[12] = "Hello World";
    int  size    = strlen(str);

    printf("\"%s\" contains %d characters", str, size);
}


void _2() {
    char s1[6] = "hello";
    char s2[6] = "hello";

    int result = strcmp(s1, s2);

    if (result == 0)    { printf("s1 is equal to s2"); }
    else                { printf("s1 is not equal to s2"); }
}


void _3() {
char s1[6] = "hello";
char s2[5] = "help";

int result = strncmp(s1, s2, 3);

if (result == 0)    { printf("s1 & s2 have the same first 3 characters"); }
else                { printf("s1 & s2 dont have the same first 3 characters"); }
}


void _4() {
    char dest[6];
    char src[6] = "Hello";

    strcpy(dest, src);

    printf("src:  %s\n", src);
    printf("dest: %s",   dest);
}


void _5() {
    char dest[4];
    char src[6] = "Hello";

    strncpy(dest, src, 3);

    printf("src:  %s\n", src);
    printf("dest: %s",   dest);
}


void _6() {
    char s1[12] = "Hello ";
    char s2[6]  = "World";

    strcat(s1, s2);

    printf("s1: %s", s1);
}


void _7() {
    char s1[10] = "Hello ";
    char s2[6]  = "World";

    strncat(s1, s2, 3);

    printf("s1: %s", s1);
}


void _8() {
char s1[12] = "Hello World";
char c      = 'l';
char *res   = strchr(s1, c);

if (res != NULL)    { printf("The first occurrence of '%c' is at index %d", c, res - s1); }
else                { printf("The character '%c' was not found in the string", c); }
}


void _9() {
char s1[12] = "Hello World";
char s2[12] = "Wo";
char *res   = strstr(s1, s2);

if (res != NULL)    { printf("The first occurrence of \"%s\" is at index %d", s2, res - s1); }
else                { printf("The string \"%s\" was not found in the string", s2); }
}



int main() {

    _9();

    printf("\n");
}
