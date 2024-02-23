#include <stdio.h>
#include <stdlib.h>
#define SIZE 100


struct Stack {
    int data[SIZE];
    int top;
};


void initialiseStack(struct Stack *s) {
    s->top = -1;
}


void push(struct Stack *s, int val) {
    // Check the overflow condition
    if (s->top == SIZE-1) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top += 1;
    s->data[s->top] = val;
}


int pop(struct Stack *s) {
    // Check the underflow condition
    if (s->top == -1) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    int val = s->data[s->top];
    s->data[s->top] = NULL;
    s->top -= 1;

    return val;
}







int main() {
    struct Stack *s = (struct Stack*) malloc(sizeof(struct Stack));
    initialiseStack(s);

    int chc;
    int p_id;

    while (true) {
        printf("\n\n-------- Menu --------\n");
        printf("1) Add patient\n");
        printf("2) Generate count\n");
        printf("3) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &chc);

        if (chc==1) {
            printf("\nEnter patient ID: ");
            scanf("%d", &p_id);
            push(s, p_id);
        }

        else if (chc==2) {
            printf("\nThere are currently %d patients in the stack\n", (s->top)+1);
        }

        else {break;}
    }
}


