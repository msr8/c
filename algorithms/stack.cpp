#include <stdio.h>
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



void display(struct Stack *s) {
    printf("[");

    // Checks if the list is empty
    if (s->top == -1) {
        printf("]");
        return;
    }

    for (int i=0; i<s->top; i++) {
        printf("%d, ", s->data[i]);
    }
    printf("%d]\n", s->data[s->top]);

}



int main() {
    struct Stack s;
    initialiseStack(&s);
    push(&s, 12);
    display(&s);
    push(&s, 5);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);

    printf("\n");
}


