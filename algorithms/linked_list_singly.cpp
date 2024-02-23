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



int insertBefore(struct SinglyLinkedList* list, int data, int beforeval) {
    // If list is empty, print error and return -1
    if (list->head == NULL) {
        printf("List is empty!\n");
        return -1;
    }

    // Allocates memory to new node
    struct Node* bnode = (struct Node*) malloc(sizeof(struct Node));
    bnode->data        = data;
    bnode->next        = NULL;

    // Initialises anode and checks if its the needed node
    struct Node* anode = list->head;
    if (anode->data == beforeval) {
        appendToFront(list, data);
        return 1;
    }
    // Checks if there is no next value, meaning the list only has one node, and its value isnt the value that we needed to find
    if (anode->next == NULL) {
        printf("%d not present in list ", data);
        printList(list);
        return 1;
    }

    // Gets cnode
    struct Node* cnode = anode->next;
    bool found = false;

    // Loops thro the list until we get to the end
    while (cnode != NULL) {
        // Checks if we need to insert bnode before cnode
        if (cnode->data == beforeval) {
            // Makes bnode point to cnode
            bnode->next = cnode;
            // Makes a node point to cnode
            anode->next = bnode;
            found = true;
            break;
        }
        anode = cnode;
        cnode = cnode->next;
    }

    // In case the element was not found in the list
    if (!found) {
        printf("%d was not found in the list ", beforeval);
        printList(list);
    }
    return 1;
}



int insertAfter(struct SinglyLinkedList* list, int data, int afterval) {
    // If list is empty, print error and return -1
    if (list->head == NULL) {
        printf("List is empty!\n");
        return -1;
    }

    // Allocates memory to new node
    struct Node* bnode = (struct Node*) malloc(sizeof(struct Node));
    bnode->data        = data;
    bnode->next        = NULL;

    // Initialises anode
    struct Node* anode = list->head;
    bool found = false;
    // Loops until last node is reached
    while (anode->next != NULL) {
        // Checks if anode has the required value
        if (anode->data == afterval) {
            // Gets cnode, ie the node after anode
            struct Node* cnode = anode->next;
            // Makes bnode point to cnode
            bnode->next = cnode;
            // Makes anode point to bnode
            anode->next = bnode;
            found = true;
            break;
        }
        // Moves onto next node
        anode = anode->next;
    }

    // If the node wasnt found
    if (!found) {
        // Checks if last node is the required node
        if (anode->data == afterval) {
            // Makes anode point to bnode
            anode->next = bnode;
            return 1;
        }
        else {
            printf("%d was not found in the list ", afterval);
            printList(list);
            return -1;
        }
    }
    return 1;

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
    insertBefore(&list, 17, 20);
    printList(&list);
    insertAfter(&list, 13, 10);
    printList(&list);


    printf("\n");
}

