# include <string.h>
# include <stdio.h>
# include <math.h>



bool is_arm(int x) {
    int  sum = 0;
    int  i;
    int  dig;
    int  x_len;
    char x_str[10] = "";

    sprintf(x_str, "%d", x);
    x_len = strlen(x_str);


    for(i=0; i < x_len; i++) {
        char ch = x_str[i];
        dig  = (int)x_str[i];
        dig -= 48; // cz ASCII
        sum += pow(dig, 3);
    }

    return x == sum;
}




int main () {
    int  x;
    char n_red[] = "\033[0;91m";
    char n_gre[] = "\033[0;92m";
    char n_mag[] = "\033[0;95m";
    char n_cya[] = "\033[0;96m";
    char res[]   = "\033[0m";

    // Gets the number
    printf("%sEnter a number%s: ", n_cya, res);
    scanf("%d", &x);

    // Prints out the result
    printf("\n%s%d%s ", n_mag, x, res);
    if (is_arm(x))    printf("%sis%s ",     n_gre, res);
    else              printf("%sis not%s ", n_red, res);
    printf("an armstrong number");

    printf("\n");
}


