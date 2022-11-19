// WAP to caclulate if the sum of the last two digits of an integer is even or odd
# include <stdio.h>

int main() {
    int  x = 134;
    int  y,z;
    int  sum;
    bool is_even;

    z       = x%10;
    y       = x%100 / 10;
    sum     = x + y;
    is_even = sum%2==0;

    printf("\n\nThe sum of the last two digits of %d is ", x);
    is_even ? printf("even") : printf("odd");

    printf("\n");
}


