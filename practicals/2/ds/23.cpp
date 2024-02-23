#include <stdio.h>
#include <string.h>
#include <ctype.h>   
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
    s->data[s->top] = 0;
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

    for (int i = 0; i < s->top; i++) {
        printf("%d, ", s->data[i]);
    }
    printf("%d]\n", s->data[s->top]);
}

int evaluatePrefix(char* expression) {
    struct Stack stack;
    initialiseStack(&stack);
    
    int length = strlen(expression);
    
    for (int i = length - 1; i >= 0; i--) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
        } else {
            int operand1 = pop(&stack);
            int operand2 = pop(&stack);
            int result;
            
            switch (expression[i]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                default:
                    printf("ERROR: Invalid Operator\n");
                    return -1;
            }
            
            push(&stack, result);
        }
    }
    
    int finalResult = pop(&stack);
    return finalResult;
}

int evaluatePostfix(char* expression) {
    struct Stack stack;
    initialiseStack(&stack);
    
    int length = strlen(expression);
    
    for (int i = 0; i < length; i++) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
        } else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            int result;
            
            switch (expression[i]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                default:
                    printf("ERROR: Invalid Operator\n");
                    return -1;
            }
            
            push(&stack, result);
        }
    }
    
    int finalResult = pop(&stack);
    return finalResult;
}

int main() {
    char prefixExpression[] = "*+35-42";
    printf("Prefix Expression: %s\n", prefixExpression);
    int prefixResult = evaluatePrefix(prefixExpression);
    printf("Result: %d\n\n", prefixResult);
    
    char postfixExpression[] = "35+42-*";
    printf("Postfix Expression: %s\n", postfixExpression);
    int postfixResult = evaluatePostfix(postfixExpression);
    printf("Result: %d\n", postfixResult);
    
    printf("\n");
}