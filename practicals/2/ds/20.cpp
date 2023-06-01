#include <stdio.h>
#include <stdlib.h>


struct Node {
    char  name[30];
    int   roll_no;
    int   marks[5];
    float avg;
    bool  is_pass;
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



void appendToEnd(struct SinglyLinkedList* list, struct Node* node) {
    // Allocates memory to new node
    node->next        = NULL;

    // Checks if list is empty. If it is, tells head to point to node
    if (list->head == NULL) {
        list->head = node;
        return;
    }
    // Else, loop thro the nodes
    // Gets the first node
    struct Node* currnode = list->head;
    // While it isnt the last node, keep going to next node
    while (currnode->next != NULL)    {currnode = currnode->next;}
    // Once the last node is reached, tell it to point to node
    currnode->next = node;
}






int main() {
    struct SinglyLinkedList list;
    int  chc;
    int  roll_no;
    int  marks[5];
    char name[30];
    int  avg;

    printf("What would you like to do?\n");
    printf("1) Insert the record of a student\n");
    printf("2) Delete the record of a student\n");
    printf("3) View the record of a student\n");
    scanf("%d", &chc);

    if (chc == 1) {
        
    //         char  name[20];
    // int   roll_no;
    // int   marks[5];
    }


    printf("\n");
}
