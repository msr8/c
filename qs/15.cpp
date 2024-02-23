// WAP to take a dimater of a circle as input and calculate the area and circumphrence of the circle
# include <stdio.h>
# include <cmath>

int main() {
    float x;
    float area, peri;
    
    printf("Enter the diamater of the circle: ");
    scanf("%f", &x);

    x   /= 2;
    peri = 2 * M_PI * x;
    area = M_PI * x * x;

    printf("For a circle having a diameter of %.2f units, the circumfrence is %.2f units and the area is %.2f sq. units", x*2, peri, area);

    printf("\n");
}

