// WAP to find if an year is a leap year
# include <stdio.h>

int main() {
    int  yr;
    bool is_leap;

    printf("Enter the year: ");
    scanf("%d", &yr);
    
    is_leap = ( (yr%4==0) && (yr%100!=0) ) || (yr%400==0); 

    printf("%d is ", yr);
    if (!is_leap)    {printf("not ");}
    printf("leap year");

    printf("\n");
}


