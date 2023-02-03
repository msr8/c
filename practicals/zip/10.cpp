// WAP to print sum of series "1 - 1/2 + 1/3 - 1/4.....n" terms
#include <stdio.h>
#include <string.h>


int main() {
    int   n;
    float ans=0;
    char  op='+';

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i=1; i<n+1; i++) {
        if (op == '+') {
            ans += 1.0/i;
            op   = '-';
        }
        else {
            ans -= 1.0/i;
            op   = '+';
        }
    }

    printf("\n%.5f", ans);

    printf("\n");
}
