// Create a structure student (char name[10], int marks[3], int total, float percentage). Enter the marks of 5 students in 3 subjects and calculate the percentage
#include <stdio.h>


struct Student {
    char  name[10];
    int   marks[3];
    int   total;
    float percentage;
};

int main() {
    struct Student students[5];
    struct Student s;
    int    n=5;
    int    i,j;

    // Takes input
    for (i=0; i<n; i++) {
        printf("\nEnter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d in 3 subjects: ", i+1);
        for (j=0; j<3; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Calculates total and percentage
    for (i=0; i<n; i++) {
        students[i].total      = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        students[i].percentage = students[i].total / 3.0;
    }

    // Prints their details
    printf("\n");
    for (i=0; i<n; i++) {
        printf("\nStudent %d details:\n", i+1);
        printf("Name:        %s\n",       students[i].name);
        printf("Marks:      %d %d %d\n",  students[i].marks[0], students[i].marks[1], students[i].marks[2]);
        printf("Total:      %d\n",        students[i].total);
        printf("Percentage: %.2f%%\n",    students[i].percentage);
    }

    printf("\n");
}