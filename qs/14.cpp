// WAP to accept a 3 digit number from the user and display the sum of all its digits
# include <stdio.h>
# include <string.h>

int main() {
    int  x;
    int  i;
    int  dig;
    int  sum=0;
    char x_str[4];

    printf("Enter a 3 digit number: ");
    scanf("%3d", &x);

    sprintf(x_str, "%d", x);
    for (i=0; i<strlen(x_str); i++) {
        dig  = (int)x_str[i];
        dig -= 48;
        sum += dig;
    }

    printf("The sum of the digits of %d is %d", x, sum);

    printf("\n");
}

