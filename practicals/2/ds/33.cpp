#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct BST {
    struct Node* root;
};



struct Node* createNode(int data) {
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


struct Node* addNode(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = addNode(root->left, data);
    } else if (data > root->data) {
        root->right = addNode(root->right, data);
    }
    return root;
}


struct Node* findMinNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}


struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) {
        return root;
    }
    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = findMinNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}



void printNode(struct Node* node, int type) {
    // Type 1: Inorder (left root right)
    // Type 2: Preorder (root left right)
    // Type 3: Postorder (left right root)

    if (node == NULL) {
        return;
    }

    if (node->left == NULL && node->right == NULL) {
        printf("%d ", node->data);
        return;
    }

    if (type == 1) {
        printNode(node->left, type);
        printf("%d ", node->data);
        printNode(node->right, type);
    } else if (type == 2) {
        printf("%d ", node->data);
        printNode(node->left, type);
        printNode(node->right, type);
    } else if (type == 3) {
        printNode(node->left, type);
        printNode(node->right, type);
        printf("%d ", node->data);
    }
}


int main() {
    struct BST bst;
    bst.root = NULL;

    bst.root = addNode(bst.root, 50);
    bst.root = addNode(bst.root, 30);
    bst.root = addNode(bst.root, 20);
    bst.root = addNode(bst.root, 40);
    bst.root = addNode(bst.root, 70);
    bst.root = addNode(bst.root, 60);
    bst.root = addNode(bst.root, 80);

    printf("Binary Search Tree (Inorder): ");
    printNode(bst.root, 1);
    printf("\n");

    printf("Binary Search Tree (Preorder): ");
    printNode(bst.root, 2);
    printf("\n");

    printf("Binary Search Tree (Postorder): ");
    printNode(bst.root, 3);
    printf("\n");

    printf("\n");

    bst.root = deleteNode(bst.root, 30);
    printf("Binary Search Tree after deleting node 30 (Inorder): ");
    printNode(bst.root, 1);

    printf("\n");
}
