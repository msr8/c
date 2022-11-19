// WAP that prints perimeter of a rectangle and take height and width as input
# include <stdio.h>

int main() {
    float h, w, p;

    printf("Enter the height of the rectangle: ");
    scanf("%f", &h);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &w);

    p = 2 * (h+w);
    printf("Perimeter of the rectangle is %.2f units", p);

    printf("\n");
}

