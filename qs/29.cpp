// WAP to input 4 values of a,b,c,d and evaluate the ratio of a+b and c-d and print the result if c-d does not equal to 0
# include <stdio.h>

int main() {
    int   a, b, c, d;
    int   a_b;
    int   c_d;
    float res;

    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    a_b = a+b;
    c_d = c-d;
    if (c_d != 0) {
        res  = (float) a_b/c_d;
        printf("The ratio of %d+%d and %d-%d is %.2f", a, b, c, d, res);
    }


    printf("\n");
}

