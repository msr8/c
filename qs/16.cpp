// WAP to accept a 4 digit number and display the product of digits placed at even places and do the same with digits placed at odd places
# include <stdio.h>

int cint(char c) {
    return (int)c - 48;
}

int main() {
    int  x;
    int  odd_prod;
    int  even_prod;
    char x_str[5];

    printf("Enter a 4 digit number: ");
    scanf("%4d", &x);

    sprintf(x_str, "%d", x);
    even_prod = cint(x_str[0]) * cint(x_str[2]);
    odd_prod  = cint(x_str[1]) * cint(x_str[3]);

    printf("For a number %d, the product of digits placed at odd places is %d and the product of digits placed at even places is %d", x, odd_prod, even_prod);

    printf("\n");
}







