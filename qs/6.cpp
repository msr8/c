// WAP to caclulate volume of sphere
# include <stdio.h>
# include <cmath>

int main() {
    float rad, vol;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &rad);
    vol = (4/3.0) * M_PI * pow(rad, 3);
    printf("\nGiven that the radius is %.2f units, volume of the sphere is %.2f cubic units", rad, vol);

    printf("\n");
}


