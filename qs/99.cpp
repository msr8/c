// WAP to accept a 4 digit number and display the product of digits placed at even places and do the same with digits placed at odd places
# include <stdio.h>
# include <string.h>

int main() {
    int  x;
    int  i;
    int  dig;
    int  prod=1;
    char x_str[5];

    printf("Enter a 3 digit number: ");
    scanf("%3d", &x);

    sprintf(x_str, "%d", x);
    for (i=0; i<strlen(x_str); i++) {
        dig  = (int)x_str[i];
        dig -= 48;
    }

    printf("\n");
}







