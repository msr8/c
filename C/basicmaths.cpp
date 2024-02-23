# include <stdio.h>

int main () {
    float a,b;
    float sum, diff, mult;

    // Asks for two floats
    printf("Please enter the first number: ");
    scanf("%f", &a);
    printf("Please enter the second number: ");
    scanf("%f", &b);

    // Calculates stuff
    sum  = a+b;
    diff = (a>b) ? a-b : b-a;
    mult = a*b;

    // Prints them out
    printf("\n");
    printf("Their sum is %f\n", sum);
    printf("Their difference is %f\n", diff);
    printf("Their product is %f\n", mult);

    printf("\n");
}
