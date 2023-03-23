#include <stdio.h>
#include <string.h>



struct STUDENT {
    int   roll_no;
    char  name[10];
    float marks;
};


void disp_student(struct STUDENT s) {
    printf("\n%d) %s: %.2f", s.roll_no, s.name, s.marks);
}


void disp_student_ptr(struct STUDENT *s) {
    printf("\n%d) %s: %.2f", s->roll_no, s->name, s->marks);
}



int main() {
    struct STUDENT s1;

    s1.roll_no = 1;
    strcpy(s1.name, "Mark");
    s1.marks = 67.8;

    struct STUDENT s2 = {2, "Will", 78.9};

    struct STUDENT students[3] = {s1, s2};

    students[2].roll_no = 3;
    strcpy(students[2].name, "Javi");
    students[2].marks = 45.6;

    disp_student(students[0]);
    disp_student_ptr(&students[1]);
    disp_student_ptr(&students[2]);

    printf("\n");
}