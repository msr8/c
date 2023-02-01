// WAP to read and print employee details like Employee ID, EName, salary using structures
#include <stdio.h>


struct Employee {
    int   id;
    char  name[100];
    float salary;
};


int main() {
    struct Employee e;

    printf("Enter the employee's ID: ");
    scanf("%d", &e.id);
    printf("Enter the employee's name: ");
    scanf("%s", e.name);
    printf("Enter the employee's salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee details:\n");
    printf("ID:     %d\n",   e.id);
    printf("Name:   %s\n",   e.name);
    printf("Salary: %.2f\n", e.salary);

    printf("\n");
}