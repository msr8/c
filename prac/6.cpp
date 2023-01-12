// WAP to determine if a no. is prime or not
#include <stdio.h>
#include <string.h>
#include <cmath>


bool is_prime(int x) {
    bool res=true;
    int  end=x/2;

    for (int i=2; i<=end; i++) {
        if (x%i == 0) {
            res = false;
            break;
        }
    }

    return res;
}


int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\n%d is ", x);
    is_prime(x) ? : printf("not ");
    printf("a prime number");

    printf("\n");
}