// WAP to write 5 student records to a file "Student.dat"
#include <stdio.h>

int main() {
    int  roll;
    char name[100];

    FILE *fptr = fopen("Student.dat", "w");
    
    for (int i=0; i<5; i++) {
        printf("Enter roll number and name of student:\n");
        scanf("%d %s", &roll, name);
        fprintf(fptr, "%d %s\n", roll, name);
    }

    fclose(fptr);

    printf("\n");
}
