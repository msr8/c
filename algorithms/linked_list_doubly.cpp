#include <stdio.h>
#include <stdlib.h>


struct Node {
    struct Node* prev;
    int data;
    struct Node* next;
};

struct DoublyLinkedList {
    struct Node* head;
};



void initialiseList(struct DoublyLinkedList* list) {
    list->head = NULL;
}



void printList(struct DoublyLinkedList* list) {
    // If list is empty
    if (list->head == NULL) {
        printf("[]\n");
        return;
    }
    
    // Else, loop thro the nodes
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



void appendToFront(struct DoublyLinkedList* list, int data) {
    // Makes the new node
    struct Node* bnode = (struct Node*) malloc(sizeof(struct Node));
    bnode->data = data;
    bnode->prev = NULL;
    bnode->next = NULL;

    // Checks if the list is empty
    if (list->head == NULL) {
        bnode->prev = list->head;
        list->head  = bnode;
        return;
    }

    // Else, gets the first node
    struct Node* cnode = list->head;
    cnode->prev = bnode;
    bnode->next = cnode;
    bnode->prev = list->head;
    list->head  = bnode;
}



void appendToEnd(struct DoublyLinkedList* list, int data) {

    // Allocates memory to new node
    struct Node* bnode = (struct Node*) malloc(sizeof(struct Node));
    bnode->data = data;
    bnode->prev = NULL;
    bnode->next = NULL;

    // Checks if the list is empty
    if (list->head == NULL) {
        bnode->prev = list->head;
        list->head  = bnode;
        return;
    }

    // CHECK IF THE LIST HAS ONLY ONE ELEM

    // Gets the last node
    struct Node* anode = list->head;
    while (anode->next != NULL) {anode = anode->next;}
    // Edits the connections
    bnode->prev = anode;
    anode->next = bnode;
}



int main() {
    struct DoublyLinkedList list;

    initialiseList(&list);
    printList(&list);
    appendToEnd(&list, 20);
    printList(&list);
    appendToFront(&list, 15);
    printList(&list);
    appendToFront(&list, 10);
    printList(&list);
    appendToEnd(&list, 25);
    printList(&list);


    printf("\n");
}

