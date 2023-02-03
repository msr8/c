// WAP to reverse a string, concatenate two strings, length of a string, copy one string to other using a user defined function and menu driven program
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  clrscr() system("clear");


void rev_str(char *dest, char *source) {
    int i;
    int src_len;

    src_len = strlen(source);
    for (i=0; i<src_len; i++) {
        dest[src_len-i-1] = source[i];
    }
    dest[src_len] = NULL;
}


void concat(char *s1, char *s2) {
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);

    for (int i=0; i<s2_len; i++) {
        s1[s1_len+i] = s2[i];
    }
    s1[s1_len + s2_len] = NULL;
}


int str_len(char *x) {
    return (int)(strchr(x, NULL) - x);
}


void str_copy(char *dest, char *source) {
    int src_len = strlen(source);
    for(int i=0; i<src_len; i++) {
        dest[i] = source[i];
    }
    dest[src_len] = NULL;
}



void node_home();
void node_1();
void node_2();
void node_3();
void node_4();

void node_home() {
    int chc;

    printf("\n\nWhat would you like to do? \n\n");
    printf("1) Reverse a string\n");
    printf("2) Concatenate two strings\n");
    printf("3) Find the length of a string\n");
    printf("4) Copy a string to another\n");
    printf("5) Exit\n\n");

    scanf("%d", &chc);

    switch (chc) {
        case 1:
            node_1();
            break;
        case 2:
            node_2();
            break;
        case 3:
            node_3();
            break;
        case 4:
            node_4();
            break;
        case 5:
            exit(0);
            break;
        default:
            exit(-1);
            break;
    }
}


void node_1() {
    clrscr();
    char x[100];
    char x_rev[100];

    printf("\n\nEnter a string: ");
    scanf("%s", x);

    rev_str(x_rev, x);

    printf("\nReverse of %s is %s\n\n", x, x_rev);
    node_home();
}


void node_2() {
    char s1[100];
    char s2[100];

    printf("\n\nEnter s1: ");
    scanf("%s", s1);
    printf("Enter s2: ");
    scanf("%s", s2);

    printf("(Before concatentation)\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    concat(s1, s2);
    printf("\n(After concatentation)\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n\n", s2);
    node_home();
}


void node_3() {
    clrscr();
    char x[100];
    int  x_len;

    printf("\n\nEnter a string: ");
    scanf("%s", x);

    x_len = str_len(x);

    printf("\n%s is %d characters long\n\n", x, x_len);
    node_home();
}


void node_4() {
    char s1[100];
    char s2[100];

    printf("\n\nEnter s1: ");
    scanf("%s", s1);
    printf("Enter s2: ");
    scanf("%s", s2);

    printf("(Before copying)\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    str_copy(s1, s2);
    printf("\n(After copying)\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n\n", s2);
    node_home();
}



int main() {
    clrscr();

    node_home();

    printf("\n");
}