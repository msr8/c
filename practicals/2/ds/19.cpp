#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end of the linked list
void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to create two linked lists from a given list
void createLists(struct Node* head, struct Node** list1, struct Node** list2) {
    struct Node* current = head;
    int count = 0;

    while (current != NULL) {
        if (count % 2 == 0) {
            insertNode(list1, current->data);
        } else {
            insertNode(list2, current->data);
        }
        current = current->next;
        count++;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

int main() {
    struct Node* list = NULL;
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    // Input List: 1 2 3 4 5 6 7 8 9 10
    insertNode(&list, 1);
    insertNode(&list, 2);
    insertNode(&list, 3);
    insertNode(&list, 4);
    insertNode(&list, 5);
    insertNode(&list, 6);
    insertNode(&list, 7);
    insertNode(&list, 8);
    insertNode(&list, 9);
    insertNode(&list, 10);

    createLists(list, &list1, &list2);

    printf("First List: ");
    printList(list1);

    printf("Second List: ");
    printList(list2);

    printf("\n");
}
