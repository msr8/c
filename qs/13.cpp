// WAP to calculate the value of a,b,c,d after executing the following statements: `a=1394; b=a%10; a=a/10; c=a%10; a=a/10; d=a%10; a=a/10;`
# include <stdio.h>

int main() {
    int x = 1394;
    int a = x;
    int b, c, d;

    b = a % 10;
    a = a / 10;
    c = a % 10;
    a = a / 10;
    d = a % 10;
    a = a / 10;

    printf("Given that at the starting, the value of a was %d, now the values are as followes:\n\n", x);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);

    printf("\n");
}

