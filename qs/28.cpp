// WAP to find out the memory allocated by int, float, long, char, double, short int, unsigned int, and unsigned char
# include <stdio.h>

int main() {
    int           _int;
    float         _float;
    long          _long;
    char          _char;
    double        _double;
    short int     _short_int;
    unsigned char _unsigned_char;

    printf("The amount of memory (in bytes) occupied by different types of variables is given below: \n\n");
    printf("int: %lu\n", sizeof _int);
    printf("float: %lu\n", sizeof _float);
    printf("long: %lu\n", sizeof _long);
    printf("char: %lu\n", sizeof _char);
    printf("double: %lu\n", sizeof _double);
    printf("short int: %lu\n", sizeof _short_int);
    printf("unsigned char: %lu\n", sizeof _unsigned_char);

    printf("\n");
}

