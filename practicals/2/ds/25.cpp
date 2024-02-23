#include <stdio.h>
#define SIZE 10


struct TwoSidedStack {
    int data[SIZE];
    int top_left;
    int top_right;
};


void initialiseStack(struct TwoSidedStack *s) {
    s->top_left  = -1;
    s->top_right = SIZE;
}


void push_left(struct TwoSidedStack *s, int val) {
    // Check the overflow condition
    if (s->top_left >= s->top_right) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top_left += 1;
    s->data[s->top_left] = val;
}

void push_right(struct TwoSidedStack *s, int val) {
    // Check the overflow condition
    if (s->top_left >= s->top_right) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top_right -= 1;
    s->data[s->top_right] = val;
}


int pop_left(struct TwoSidedStack *s) {
    // Check the underflow condition
    if (s->top_left == -1 && s->top_right == SIZE) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    int val = s->data[s->top_left];
    // s->data[s->top_left] = NULL;
    s->top_left -= 1;

    return val;
}


int pop_right(struct TwoSidedStack *s) {
    // Check the underflow condition
    if (s->top_left == -1 && s->top_right == SIZE) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    int val = s->data[s->top_right];
    // s->data[s->top_right] = NULL;
    s->top_right += 1;

    return val;
}




void display(struct TwoSidedStack *s) {
    // printf("[");

    // If list is empty
    if (s->top_left == -1 && s->top_right == SIZE) {
        printf("]");
        return;
    }

    // printf("%d\n", s->top_left);
    for (int i=0; i<=s->top_left; i++) {
        printf("%d ", s->data[i]);
    }
    for (int i=s->top_left+1; i<s->top_right; i++) {
        printf("- ");
    }
    for (int i=s->top_right; i<SIZE; i++) {
        printf("%d ", s->data[i]);
    }

    printf("\n");
}



int main() {
    struct TwoSidedStack s;
    initialiseStack(&s);

    push_left(&s, 1);
    display(&s);
    push_right(&s, 9);
    display(&s);

    push_left(&s, 2);
    display(&s);
    push_right(&s, 8);
    display(&s);

    pop_left(&s);
    display(&s);
    pop_right(&s);
    display(&s);

    printf("\n");
}


