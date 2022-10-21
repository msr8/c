# include <stdio.h>
# include <math.h>

int countdig(int x) {
    int count = 0;

    // Loops until its 0
    while (x > 0) {
        x     =  x/10;
        count += 1;
    }

    return count;
}




int main () {
    int x;

    // Gets the number
    printf("Enter a number: ");
    scanf("%d", &x);

    int dig_c = countdig(x);
    int sum   = 0;

    while (dig_c > 0) {
        int dig  = (int)(x / pow(10,dig_c-1)) % 10;
        sum      += pow(dig, 3);
        dig_c    -= 1;
    }

    printf("\nsum of cubes is %d", sum);

    printf("\n");
}


