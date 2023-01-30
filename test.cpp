#include <cmath>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// void rev_str(char *src, char *dest) {
//     int src_len = strlen(src);

//     for(int i=0; i<src_len; i++) {
//         dest[src_len-i-1] = src[i];
//     }

//     dest[src_len] = '\0';
// }


// int main() {
//     int  x;
//     char x_str[100];
//     char x_rev_str[100];
//     int  x_rev;

//     printf("Enter a number: ");
//     scanf("%d", &x);

//     sprintf(x_str, "%d", x);
//     rev_str(x_str, x_rev_str);
//     x_rev = atoi(x_rev_str);

//     printf("\nReverse of %d is %d", x, x_rev);

//     printf("\n");
// }



int main() {
    int a=1;
    int b=2;
    int c=3;

    int *arr[3] = {&a, &b, &c};

    printf("%p | %p", arr[1], &b);

    printf("\n");
}

