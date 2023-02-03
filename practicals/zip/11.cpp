// WAP to find the sum of series "x - x^3/3! + x^5/5! - x^7/7! + x^9/9!....n " terms
#include <stdio.h>
#include <string.h>
#include <cmath>



int fact(int x) {
    if   (x==1)    {return 1;}
    else           {return x * fact(x-1);}
}


int main() {
    int   x;
    int   n;
    float ans=0;
    char  op='+';
    float elem;
    int   j=1;

    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        elem = pow(x,j) / fact(j);
        if (op=='+') {
            ans += elem;
            op = '-';
        }
        else {
            ans -= elem;
            op = '+';
        }
        j+=2;
    }

    printf("\n%f", ans);

    printf("\n");
}
