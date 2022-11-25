// WAP to accept the length and breadth of a rectangle and determine if, magnitude wise, area is greater than the perimeter or is perimeter greater than the area
# include <stdio.h>

int main() {
    float l,b;
    float p,a;

    printf("Please enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Please enter the breadth of the rectangle: ");
    scanf("%f", &b);

    p = 2 * (l+b);
    a = l * b;

    printf("Given that the length and breadth of a rectangle is %.2f units and %.2f units respectively, magnitude wise, the ", l, b);
    p > a ? printf("perimeter") : printf("area");
    printf(" is greater than the ");
    p < a ? printf("perimeter") : printf("area");

    printf("\n");
}

