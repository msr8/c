// In a company an employee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary
#include <stdio.h>


int main() {
    int sal, hra, da;

    printf("Enter your salary: ");
    scanf("%d", &sal);

    if (sal < 1500) {
        hra = 0.1 * sal;
        da  = 0.9 * sal;
    }
    else {
        hra = 500;
        da  = 0.98 * sal;
    }

    printf("\nGiven your salary is Rs.%d, your HRA is Rs.%d and DA is Rs.%d", sal, hra, da);

    printf("\n");
}