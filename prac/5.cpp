// WAP to calculate the Armstrong nos. b/w 1 and 500
#include <stdio.h>
#include <string.h>
#include <cmath>


bool is_arm(int x) {
    int  sum = 0;
    int  i;
    char ch;
    int  dig;
    int  x_len;
    char x_str[10] = "";

    sprintf(x_str, "%d", x);
    x_len = strlen(x_str);

    for(i=0; i < x_len; i++) {
        ch   = x_str[i];
        dig  = (int)x_str[i];
        dig -= 48;
        sum += pow(dig, 3);
    }

    return x == sum;
}


int main() {
    int start = 1;
    int end   = 500;

    printf("Armstrong numbers between %d and %d are:\n\n", start, end);
    for (int i=start; i<=end; i++) {
        if (not is_arm(i))    {continue;}
        printf("%d ", i);
    }

    printf("\n");
}