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
    int  x;
    char n_red[] = "\033[0;91m";
    char n_gre[] = "\033[0;92m";
    char n_mag[] = "\033[0;95m";
    char res[]   = "\033[0m";

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

    // Prints out the result
    printf("\n%s%d%s ", n_mag, x, res);
    if (sum == x)    { printf("%sis%s ",     n_gre, res); }
    else             { printf("%sis not%s ", n_red, res); }
    printf("an armstrong number");

    printf("\n");
}


