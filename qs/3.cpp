// WAP to take mins as input and display total number of hours and minutes
# include <stdio.h>

int main() {
    int x, mins, hrs;

    printf("Enter the total number of minutes: ");
    scanf("%d", &x);

    hrs  = x / 60;
    mins = x % 60;

    printf("%d minutes equal to %d hours and %d minutes", x, hrs, mins);

    printf("\n");
}

