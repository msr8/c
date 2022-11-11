// WAP to Convert Cº to Fº
# include <stdio.h>

int main() {
    float c,f;

    printf("Enter the temperature in celcius: ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("\n%.1fºC is equal to %.1fºF", c, f);

    printf("\n");
}





