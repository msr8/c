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




void printNode(struct Node* node, int type) {
    // Type 0: Inorder   (left root  right)
    // Type 1: Preorder  (root left  right)
    // Type 2: Postorder (left right root)

    // Checks if the node given to us is NULL
    if (node == NULL) {
        return;
    }

    // Checks if both the child nodes are NULL. If it is, print it and return
    if (node->left==NULL && node->right==NULL) {
        printf("%c ", node->data);
        return;
    }

    // Inorder
    if (type==1) {
        printNode(node->left, type);
        printf("%c ", node->data);
        printNode(node->right, type);
    }
    // Preorder
    if (type==2) {
        printf("%c ", node->data);
        printNode(node->left, type);
        printNode(node->right, type);
    }
    // Postorder
    if (type==3) {
        printNode(node->left, type);
        printNode(node->right, type);
        printf("%c ", node->data);
    }

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
    nB->left  = NULL;
    nC->left  = nD;
    nC->right = NULL;
    nD->left  = nE;
    nD->right = nF;
    nG->left  = nH;
    nG->right = nN;
    nH->left  = NULL;
    nH->right = nI;
    nI->left  = nJ;
    nI->right = nK;
    nK->left  = nL;
    nK->right = nM;


    // struct Node *nA = (struct Node*) malloc( sizeof(struct Node) );
    // struct Node *nB = (struct Node*) malloc( sizeof(struct Node) );
    // struct Node *nC = (struct Node*) malloc( sizeof(struct Node) );
    // struct Node *nD = (struct Node*) malloc( sizeof(struct Node) );
    // struct Node *nE = (struct Node*) malloc( sizeof(struct Node) );
    // struct Node *nF = (struct Node*) malloc( sizeof(struct Node) );
    // struct Node *nG = (struct Node*) malloc( sizeof(struct Node) );


    // nA->data = 1;
    // nB->data = 2;
    // nC->data = 3;
    // nD->data = 4;
    // nE->data = 5;
    // nF->data = 6;
    // nG->data = 7;

    // nA->left  = nB;
    // nA->right = nC;
    // nB->left  = nD;
    // nB->right = nE;
    // nC->left  = nF;
    // nC->right = nG;


    struct BinaryTree *tree =  (struct BinaryTree*) malloc( sizeof(struct BinaryTree) );
    tree->root = nA;

    printNode(tree->root, 1);
    printf("\n");
    printNode(tree->root, 2);
    printf("\n");
    printNode(tree->root, 3);


    printf("\n");
}
