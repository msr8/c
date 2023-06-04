#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

struct Stack {
    char data[SIZE];
    int top;
};

void initialiseStack(struct Stack *s) {
    s->top = -1;
}

void push(struct Stack *s, char val) {
    // Check the overflow condition
    if (s->top == SIZE-1) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top += 1;
    s->data[s->top] = val;
}

char pop(struct Stack *s) {
    // Check the underflow condition
    if (s->top == -1) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    char val = s->data[s->top];
    s->data[s->top] = '\0';
    s->top -= 1;

    return val;
}

char peek(struct Stack *s) {
    // Check if the stack is empty
    if (s->top == -1) {
        printf("ERROR: Stack is empty\n");
        return -1;
    }

    return s->data[s->top];
}

int isOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int getPrecedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

void infixToPrefix(char* infixExpression, char* prefixExpression) {
    struct Stack stack;
    initialiseStack(&stack);

    int infixLength = strlen(infixExpression);
    int prefixIndex = 0;

    for (int i = infixLength - 1; i >= 0; i--) {
        if (infixExpression[i] == ')') {
            push(&stack, infixExpression[i]);
        } else if (infixExpression[i] == '(') {
            while (stack.top != -1 && peek(&stack) != ')') {
                prefixExpression[prefixIndex++] = pop(&stack);
            }
            pop(&stack); // Discard ')'
        } else if (isOperand(infixExpression[i])) {
            prefixExpression[prefixIndex++] = infixExpression[i];
        } else {
            while (stack.top != -1 && getPrecedence(infixExpression[i]) < getPrecedence(peek(&stack))) {
                prefixExpression[prefixIndex++] = pop(&stack);
            }
            push(&stack, infixExpression[i]);
        }
    }

    while (stack.top != -1) {
        prefixExpression[prefixIndex++] = pop(&stack);
    }

    prefixExpression[prefixIndex] = '\0';

    // Reverse the prefix expression
    int start = 0;
    int end = prefixIndex - 1;
    while (start < end) {
        char temp = prefixExpression[start];
        prefixExpression[start] = prefixExpression[end];
        prefixExpression[end] = temp;
        start++;
        end--;
    }
}

void infixToPostfix(char* infixExpression, char* postfixExpression) {
    struct Stack stack;
    initialiseStack(&stack);

    int infixLength = strlen(infixExpression);
    int postfixIndex = 0;

    for (int i = 0; i < infixLength; i++) {
        if (infixExpression[i] == '(') {
            push(&stack, infixExpression[i]);
        } else if (infixExpression[i] == ')') {
            while (stack.top != -1 && peek(&stack) != '(') {
                postfixExpression[postfixIndex++] = pop(&stack);
            }
            pop(&stack); // Discard '('
        } else if (isOperand(infixExpression[i])) {
            postfixExpression[postfixIndex++] = infixExpression[i];
        } else {
            while (stack.top != -1 && getPrecedence(infixExpression[i]) <= getPrecedence(peek(&stack))) {
                postfixExpression[postfixIndex++] = pop(&stack);
            }
            push(&stack, infixExpression[i]);
        }
    }

    while (stack.top != -1) {
        postfixExpression[postfixIndex++] = pop(&stack);
    }

    postfixExpression[postfixIndex] = '\0';
}

int main() {
    char infixExpression[SIZE];
    printf("Enter the INFIX expression: ");
    fgets(infixExpression, SIZE, stdin);
    infixExpression[strcspn(infixExpression, "\n")] = '\0'; // Remove the newline character from fgets

    char prefixExpression[SIZE];
    char postfixExpression[SIZE];

    infixToPrefix(infixExpression, prefixExpression);
    printf("PREFIX Expression: %s\n", prefixExpression);

    infixToPostfix(infixExpression, postfixExpression);
    printf("POSTFIX Expression: %s\n", postfixExpression);

    printf("\n");
}
