// WAP to accept a character and display wether it is a vowel or consonant. Make use of conditional operator
# include <stdio.h>

int main() {
    char x;
    bool is_vow;

    printf("Enter a character: ");
    scanf("%c", &x);

    is_vow = x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U';

    printf("%c is a ", x);
    is_vow ? printf("vowel") : printf("constant");

    printf("\n");
}

