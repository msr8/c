// WAP to accept 5 numbers and display their sum, average, and standard deviation
# include <stdio.h>
# include <cmath>

int main() {
    int   a,b,c,d,e;
    int   sum;
    float avg;
    float dev;

    printf("Enter 5 numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    sum = a+b+c+d+e;
    avg = sum / 5.0;
    // https://www.scribbr.com/statistics/standard-deviation/
    dev = pow(a-avg,2) + pow(b-avg,2) + pow(c-avg,2) + pow(d-avg,2) + pow(e-avg,2);
    dev = dev / 4;
    dev = sqrt( (double)dev );

    printf("\nGiven that the set of the numbers is a population, the sum of the numbers is %d, the average is %.2f, and the standard deviation is %.2f", sum, avg, dev);

    printf("\n");
}

