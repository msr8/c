// WAP to display a^2, a^3, a^4, a^5 of a number a=5. Without using any library, compute above values & display the result in proper format
# include <stdio.h>

int main() {
    int a   = 5;
    int a_2 = a*a;
    int a_3 = a*a*a;
    int a_4 = a*a*a*a;
    int a_5 = a*a*a*a*a;

    printf("Given that a is %d:\n\n", a);
    printf("a^2: %d\n", a_2);
    printf("a^3: %d\n", a_3);
    printf("a^4: %d\n", a_4);
    printf("a^5: %d\n", a_5);

    printf("\n");
}

