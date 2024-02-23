// WAP to tell if an employee has company insurance or not considering that the company insures them only if they're married, they're unmarried and are 30+ yr old male, or they're unmarried and are a 25+ yr old female
# include <stdio.h>

int main() {
    int  age;
    char marr;
    char gend;
    bool is_insured;

    // https://stackoverflow.com/questions/24099976/read-two-characters-consecutively-using-scanf-in-c
    printf("Please enter your gender (M for male and F for female): ");
    scanf(" %c", &gend);
    printf("Please enter your marital status (M for married and U for unmarried): ");
    scanf(" %c", &marr);
    printf("Please enter your age: ");
    scanf("%d", &age);

    is_insured = (marr=='M') || (marr=='U' and gend=='M' and age>=30) || (marr=='U' and gend=='F' and age>=25);

    printf("\nYou are ");
    if (!is_insured)    { printf("not "); }
    printf("insured");

    printf("\n");
}

