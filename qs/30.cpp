// WAP to input an employees sallery and print out his gross sallery, considering that if his basic sallery is <1500, then his HRA is 10% and his DA is 90%. Otherwise, his HRA is Rs500 and his DA is 98%
# include <stdio.h>

int main() {
    float sal, hra, da, sum;

    printf("Enter your sallery: ");
    scanf("%f", &sal);

    if (sal < 1500) {
        hra = 0.1 * sal;
        da  = 0.9 * sal;
    }
    else {
        hra = 500;
        da  = 0.98 * sal;
    }
    sum = sal + hra + da;

    printf("Considering your sallery is %.2f, your HRA is %.2f and your DA is %.2f, thus making your total sallery %.2f", sal, hra, da, sum);

    printf("\n");
}

