// WAP to show the use of STRINGIZE (#) AND TOKENPASTING (##) operator in C
#include <stdio.h>
#define concat(a, b) a##b
#define str(s) #s


int main() {
   int xy = 100;
   
   printf("Value of xy: %d\n", xy);
   printf("String of xy: %s\n", str(xy));
   printf("Concatenated value of x and y: %d\n", concat(x, y));
   
   printf("\n");
}
