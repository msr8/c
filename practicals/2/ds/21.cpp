#include <stdio.h>
#include <stdlib.h>
#define SIZE 100


struct Node {
    int data;
    struct Node* next;
};

struct SinglyLinkedList {
    struct Node* head;
};

struct Stack {
    struct SinglyLinkedList* data;
    int top;
};



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


int deleteFromEnd(struct SinglyLinkedList* list) {
    // Checks if list is empty. If it is, stop the program
    if (list->head == NULL) {return -1;}

    struct Node* last_node;
    int val;

    // Checks if only one node is there. If it is, tells head to point to NULL
    if (list->head->next == NULL) {
        last_node  = list->head;
        list->head = NULL;
        val        = last_node->data;
        free(last_node);
        return val;
    }

    // Gets the first node
    struct Node* currnode = list->head;
    // While it isnt the second last node, keep going to next node
    while (currnode->next->next != NULL)    {currnode = currnode->next;}
    // Once the second last node is reached, tell it to point to NULL
    last_node      = currnode->next;
    currnode->next = NULL;
    val            = last_node->data;
    free(last_node);
    return val;
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




void initialiseStack(struct Stack *s) {
    struct SinglyLinkedList* list = (struct SinglyLinkedList*) malloc( sizeof(struct SinglyLinkedList) );
    list->head = NULL;
    s->top     = -1;
    s->data    = list;
}


void push(struct Stack *s, int val) {
    // Check the overflow condition
    if (s->top == SIZE-1) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top += 1;
    appendToEnd(s->data, val);
}


int pop(struct Stack *s) {
    // Check the underflow condition
    if (s->top == -1) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    s->top -= 1;
    int val = deleteFromEnd(s->data);

    return val;
}



void display(struct Stack *s) {
    printList(s->data);
}



int main() {
    struct Stack s;
    initialiseStack(&s);
    push(&s, 12);
    display(&s);
    push(&s, 5);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);

    printf("\n");
}


