#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int rollno;
    int marks[5];
    float average;
    char result[10];
    struct Student* next;
};

// Function to create a new student node
struct Student* createStudent(char name[], int rollno, int marks[]) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    strcpy(newStudent->name, name);
    newStudent->rollno = rollno;
    memcpy(newStudent->marks, marks, sizeof(newStudent->marks));

    // Calculate the average
    int totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        totalMarks += marks[i];
    }
    newStudent->average = (float)totalMarks / 5;

    // Set the result
    if (newStudent->average < 50) {
        strcpy(newStudent->result, "Fail");
    } else {
        strcpy(newStudent->result, "Pass");
    }

    newStudent->next = NULL;

    return newStudent;
}

// Function to insert a student at the end of the linked list
void insertStudent(struct Student** head, struct Student* newStudent) {
    if (*head == NULL) {
        *head = newStudent;
    } else {
        struct Student* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newStudent;
    }
}

// Function to display the student database
void displayStudents(struct Student* head) {
    struct Student* current = head;
    while (current != NULL) {
        printf("Name: %s\n", current->name);
        printf("Roll No: %d\n", current->rollno);
        printf("Marks: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", current->marks[i]);
        }
        printf("\n");
        printf("Average: %.2f\n", current->average);
        printf("Result: %s\n", current->result);
        printf("--------------------\n");
        current = current->next;
    }
}

int main() {
    struct Student* head = NULL;

    // Creating and inserting students
    int marks1[] = {75, 80, 85, 90, 92};
    struct Student* student1 = createStudent("John", 1, marks1);
    insertStudent(&head, student1);

    int marks2[] = {65, 70, 75, 80, 82};
    struct Student* student2 = createStudent("Emily", 2, marks2);
    insertStudent(&head, student2);

    int marks3[] = {55, 60, 65, 70, 72};
    struct Student* student3 = createStudent("David", 3, marks3);
    insertStudent(&head, student3);

    // Displaying the student database
    displayStudents(head);

    printf("\n");
}
