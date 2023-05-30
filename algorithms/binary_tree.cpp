#include <stdio.h>
#include <stdlib.h>


struct Node {
    int level;
    struct Node* left;
    int data;
    struct Node* right;
};

struct BinaryTree {
    struct Node* root;
};




void printNode(struct Node* node) {
    // Checks if the node given to us is NULL
    if (node == NULL) {
        return;
    }

    // Checks if both the child nodes are NULL. If it is, print it and return
    if (node->left==NULL && node->right==NULL) {
        printf("%c ", node->data);
        return;
    }

    // Otherwise, do "Inorder" traversal, ie left,root,right
    printNode(node->left);
    printf("%c ", node->data);
    printNode(node->right);
}


void printTree(struct BinaryTree *tree) {
    printNode(tree->root);
}








int main() {
    struct Node *nA = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nB = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nC = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nD = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nE = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nF = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nG = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nH = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nI = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nJ = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nK = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nL = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nM = (struct Node*) malloc( sizeof(struct Node) );
    struct Node *nN = (struct Node*) malloc( sizeof(struct Node) );

    nA->right = NULL;
    nB->right = NULL;
    nC->right = NULL;
    nD->right = NULL;
    nE->right = NULL;
    nF->right = NULL;
    nG->right = NULL;
    nH->right = NULL;
    nI->right = NULL;
    nJ->right = NULL;
    nK->right = NULL;
    nL->right = NULL;
    nM->right = NULL;
    nN->right = NULL;

    nA->left = NULL;
    nB->left = NULL;
    nC->left = NULL;
    nD->left = NULL;
    nE->left = NULL;
    nF->left = NULL;
    nG->left = NULL;
    nH->left = NULL;
    nI->left = NULL;
    nJ->left = NULL;
    nK->left = NULL;
    nL->left = NULL;
    nM->left = NULL;
    nN->left = NULL;

    nA->data = 'A';
    nB->data = 'B';
    nC->data = 'C';
    nD->data = 'D';
    nE->data = 'E';
    nF->data = 'F';
    nG->data = 'G';
    nH->data = 'H';
    nI->data = 'I';
    nJ->data = 'J';
    nK->data = 'K';
    nL->data = 'L';
    nM->data = 'M';
    nN->data = 'N';

    nA->left  = nB;
    nA->right = nG;
    nB->right = nC;
    nC->left  = nD;
    nD->left  = nE;
    nD->right = nF;
    nG->left  = nH;
    nG->right = nN;
    nH->right = nI;
    nI->left  = nJ;
    nI->right = nK;
    nK->left  = nL;
    nK->right = nM;
    
    struct BinaryTree *tree =  (struct BinaryTree*) malloc( sizeof(struct BinaryTree) );
    tree->root = nA;

    printTree(tree);




    printf("\n");
}

