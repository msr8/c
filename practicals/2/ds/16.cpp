#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    if (list->head == NULL) {
        printf("[]\n");
        return;
    }

    struct Node* currNode = list->head;
    printf("[");
    while (currNode->next != NULL) {
        printf("%d, ", currNode->data);
        currNode = currNode->next;
    }
    printf("%d]\n", currNode->data);
}

void insertFront(struct DoublyLinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = list->head;

    if (list->head != NULL) {
        list->head->prev = newNode;
    }

    list->head = newNode;
}

void insertLast(struct DoublyLinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (list->head == NULL) {
        newNode->prev = NULL;
        list->head = newNode;
        return;
    }

    struct Node* lastNode = list->head;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }

    lastNode->next = newNode;
    newNode->prev = lastNode;
}

void insertAfter(struct DoublyLinkedList* list, int data, int afterData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    struct Node* currNode = list->head;
    while (currNode != NULL && currNode->data != afterData) {
        currNode = currNode->next;
    }

    if (currNode == NULL) {
        printf("Element %d not found in the list.\n", afterData);
        free(newNode);
        return;
    }

    newNode->next = currNode->next;
    newNode->prev = currNode;
    if (currNode->next != NULL) {
        currNode->next->prev = newNode;
    }
    currNode->next = newNode;
}

void insertBefore(struct DoublyLinkedList* list, int data, int beforeData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    struct Node* currNode = list->head;
    while (currNode != NULL && currNode->data != beforeData) {
        currNode = currNode->next;
    }

    if (currNode == NULL) {
        printf("Element %d not found in the list.\n", beforeData);
        free(newNode);
        return;
    }

    newNode->prev = currNode->prev;
    newNode->next = currNode;
    if (currNode->prev != NULL) {
        currNode->prev->next = newNode;
    } else {
        list->head = newNode;
    }
    currNode->prev = newNode;
}

void deleteFront(struct DoublyLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = list->head;
    list->head = list->head->next;
    if (list->head != NULL) {
        list->head->prev = NULL;
    }
    free(temp);
}

void deleteLast(struct DoublyLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty!\n");
        return;
    }

    if (list->head->next == NULL) {
        free(list->head);
        list->head = NULL;
        return;
    }

    struct Node* lastNode = list->head;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }

    lastNode->prev->next = NULL;
    free(lastNode);
}

void deleteNode(struct DoublyLinkedList* list, int data) {
    if (list->head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* currNode = list->head;
    while (currNode != NULL && currNode->data != data) {
        currNode = currNode->next;
    }

    if (currNode == NULL) {
        printf("Element %d not found in the list.\n", data);
        return;
    }

    if (currNode->prev != NULL) {
        currNode->prev->next = currNode->next;
    } else {
        list->head = currNode->next;
    }

    if (currNode->next != NULL) {
        currNode->next->prev = currNode->prev;
    }

    free(currNode);
}

void sortList(struct DoublyLinkedList* list) {
    if (list->head == NULL || list->head->next == NULL) {
        return;
    }

    struct Node* currNode;
    struct Node* nextNode;
    bool swapped;

    do {
        swapped = false;
        currNode = list->head;

        while (currNode->next != NULL) {
            nextNode = currNode->next;

            if (currNode->data > nextNode->data) {
                int temp = currNode->data;
                currNode->data = nextNode->data;
                nextNode->data = temp;
                swapped = true;
            }

            currNode = nextNode;
        }
    } while (swapped);
}

int countNodes(struct DoublyLinkedList* list) {
    int count = 0;
    struct Node* currNode = list->head;

    while (currNode != NULL) {
        count++;
        currNode = currNode->next;
    }

    return count;
}

int main() {
    struct DoublyLinkedList list;
    initialiseList(&list);

    printf("List after initialization: ");
    printList(&list);

    insertLast(&list, 20);
    printf("List after inserting 20 at the end: ");
    printList(&list);

    insertFront(&list, 15);
    printf("List after inserting 15 at the front: ");
    printList(&list);

    insertFront(&list, 10);
    printf("List after inserting 10 at the front: ");
    printList(&list);

    insertAfter(&list, 25, 20);
    printf("List after inserting 25 after 20: ");
    printList(&list);

    insertBefore(&list, 5, 10);
    printf("List after inserting 5 before 10: ");
    printList(&list);

    deleteFront(&list);
    printf("List after deleting the front node: ");
    printList(&list);

    deleteLast(&list);
    printf("List after deleting the last node: ");
    printList(&list);

    deleteNode(&list, 15);
    printf("List after deleting node with data 15: ");
    printList(&list);

    sortList(&list);
    printf("List after sorting: ");
    printList(&list);

    int nodeCount = countNodes(&list);
    printf("Number of nodes in the list: %d\n", nodeCount);

    printf("\n");
}
