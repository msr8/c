#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct SinglyLinkedList {
    struct Node* head;
    int count;
};



void initialiseList(struct SinglyLinkedList* list) {
    list->head  = NULL;
    list->count = 0;
}

void appendToEnd(struct SinglyLinkedList* list, int data) {
    // Allocates memory to new node
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data        = data;
    node->next        = NULL;

    // Checks if list is empty. If it is, tells head to point to node
    if (list->head == NULL) {
        list->head = node;
    }
    // Else, loop thro the nodes
    else {
        // Gets the first node
        struct Node* currnode = list->head;
        // While it isnt the last node, keep going to next node
        while (currnode->next != NULL)    {currnode = currnode->next;}
        // Once the last node is reached, tell it to point to node
        currnode->next = node;
    }

    list->count++;
}

void printPolynomial(struct SinglyLinkedList* list) {
    struct Node* node = list->head;
    printf("%dx^%d", node->data, list->count-1);
    node = node->next;

    for (int c = list->count-2; c>=0; c--) {
        printf(" + %dx^%d", node->data, c);
        node = node->next;
    }
    
    printf("\n");
}

struct SinglyLinkedList* addPolynomials(struct SinglyLinkedList* list1, struct SinglyLinkedList* list2) {
    // Gets the count
    int count = list1->count - 1;

    // Initialises stuff
    struct SinglyLinkedList* list3 = (struct SinglyLinkedList*) malloc( sizeof(struct SinglyLinkedList) );
    struct Node* node1 = list1->head;
    struct Node* node2 = list2->head;
    
    for ( ; count>=0; count--) {
        appendToEnd(list3, node1->data + node2->data);
        node1 = node1->next;
        node2 = node2->next;
    }

    return list3;
}



int main () {
    // 4x^2 + 2x - 8
    struct SinglyLinkedList list1;
    initialiseList(&list1);
    appendToEnd(&list1, 4);
    appendToEnd(&list1, 2);
    appendToEnd(&list1, -8);
    printPolynomial(&list1);

    // x^2 - 4x + 12
    struct SinglyLinkedList list2;
    initialiseList(&list2);
    appendToEnd(&list2, 1);
    appendToEnd(&list2, -4);
    appendToEnd(&list2, 12);
    printPolynomial(&list2);

    // Adding both the polynomials
    struct SinglyLinkedList* list3 = addPolynomials(&list1, &list2);
    printf("\nAfter adding both the polynomials, we get:\n");
    printPolynomial(list3);

    printf("\n");
}


