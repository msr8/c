// WAP TO FIND THE SUM OF SERIES-“X-X^3/3!+X^5/5!-X^7/7!+X^9/9!....n “terms
#include <stdio.h>
#include <string.h>
#include <cmath>



int fact(int x) {
    if   (x==1)    {return 1;}
    else           {return x * fact(x-1);}
}


int main() {
    int n=5,x;
    int j=1;
    float ans=0;
    char op='+';
    float elem;

    printf("Enter the value of x: ");
    scanf("%d",&x);

    for(int i=1; i<=n;i++) {
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
