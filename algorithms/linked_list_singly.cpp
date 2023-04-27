#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct SinglyLinkedList {
    struct Node* head;
};



void initialiseList(struct SinglyLinkedList* list) {
    list->head = NULL;
}



void appendToFront(struct SinglyLinkedList* list, int data) {
    // anode is head, bnode is new node, cnode is first node, aka the one that will be after bnode. So the end result should look like:
    // anode (head) -> bnode (new) -> cnode

    // Allocates memory to new node
    struct Node* bnode = (struct Node*) malloc(sizeof(struct Node));
    bnode->data        = data;
    bnode->next        = NULL;

    // Checks if list is empty. If it is, tells head to point to bnode
    if (list->head == NULL) {
        list->head = bnode;
    }
    // Else, tells bnode to point to cnode (what head is pointing to), and then head to point to bnode
    else {
        bnode->next = list->head;
        list->head  = bnode;
    }
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
}



void printList(struct SinglyLinkedList* list) {
    // If list is empty
    if (list->head == NULL) {
        printf("[]\n");
    }
    
    // Else, loop thro the nodes
    else {
        struct Node* currnode;
        printf("[");
        // Gets the first node
        currnode = list->head;
    
        // While it isnt the last node, keep printing its data and going to next node
        while (currnode->next != NULL)    {
            printf("%d, ", currnode->data);
            currnode = currnode->next;
        }

        // Once the last node is reached, print the data and close the array
        printf("%d]\n", currnode->data);
    }
}



int main() {
    struct SinglyLinkedList list;

    initialiseList(&list);
    printList(&list);
    appendToFront(&list, 15);
    printList(&list);
    appendToFront(&list, 10);
    printList(&list);
    appendToEnd(&list, 20);
    printList(&list);


    printf("\n");
}


