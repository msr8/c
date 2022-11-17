// WAP to caclulate the roots of a quadratic equation
# include <stdio.h>
# include <cmath>

int main() {
    int a = 1;
    int b = 7;
    int c = 12;
    int a_r, b_r;
    a_r = ( -b + sqrt((b*b)-(4*a*c)) ) / (2*a);
    b_r = ( -b - sqrt((b*b)-(4*a*c)) ) / (2*a);
    printf("\n\n_4(): The solutions for the equation %dx^2 + %dx + %d are %d & %d\n", a, b, c, a_r, b_r);

    printf("\n");
}


