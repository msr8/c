// WAP to convert km/h to mi/h
# include <stdio.h>

int main() {
    int km, mi;

    printf("Enter the speed in km/h: ");
    scanf("%d", &km);
    mi = km / 1.609;
    printf("\n%d km/h is equal to %d mi/h", km, mi);

    printf("\n");
}

