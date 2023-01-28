// WAP to find diameter, circumference and area of a circle using functions
#include <stdio.h>
#include <cmath>


float diameter(float r) {
    return r*2;
}

float circumfrence(float r) {
    return 2*M_PI*r;
}

float area(float r) {
    return M_PI*r*r;
}


int main() {
    float x;

    printf("Enter the radius: ");
    scanf("%f", &x);

    printf("\nDiameter: %.3f units\n", diameter(x));
    printf("Circumfrence: %.3f units\n", circumfrence(x));
    printf("Area: %.3f sq. units\n", area(x));

    printf("\n");
}