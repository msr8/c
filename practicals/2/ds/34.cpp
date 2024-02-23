#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

bool isOperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
        return true;
    }
    return false;
}

void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%c ", root->data);
    inorderTraversal(root->right);
}

struct Node* constructExpressionTree(char postfix[]) {
    struct Node* stack[100];
    int top = -1;
    for (int i = 0; postfix[i] != '\0'; i++) {
        if (!isOperator(postfix[i])) {
            struct Node* operand = createNode(postfix[i]);
            stack[++top] = operand;
        } else {
            struct Node* operatr = createNode(postfix[i]);
            operatr->right = stack[top--];
            operatr->left = stack[top--];
            stack[++top] = operatr;
        }
    }
    return stack[top];
}

int main() {
    char postfix[] = "ab+cd*/e-";
    struct Node* root = constructExpressionTree(postfix);

    printf("Inorder Traversal of Expression Tree: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
