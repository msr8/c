#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct CircularLinkedList {
    struct Node* head;
};

void initializeList(struct CircularLinkedList* list) {
    list->head = NULL;
}

void printList(struct CircularLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* currentNode = list->head;
    printf("List: ");
    do {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    } while (currentNode != list->head);
    printf("\n");
}

void insertFront(struct CircularLinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (list->head == NULL) {
        newNode->next = newNode;
        list->head = newNode;
    } else {
        struct Node* lastNode = list->head;
        while (lastNode->next != list->head) {
            lastNode = lastNode->next;
        }
        newNode->next = list->head;
        lastNode->next = newNode;
        list->head = newNode;
    }
}

void insertEnd(struct CircularLinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (list->head == NULL) {
        newNode->next = newNode;
        list->head = newNode;
    } else {
        struct Node* lastNode = list->head;
        while (lastNode->next != list->head) {
            lastNode = lastNode->next;
        }
        newNode->next = list->head;
        lastNode->next = newNode;
    }
}

void deleteFront(struct CircularLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* currentNode = list->head;
    struct Node* lastNode = list->head;
    while (lastNode->next != list->head) {
        lastNode = lastNode->next;
    }

    if (currentNode == lastNode) {
        list->head = NULL;
        free(currentNode);
    } else {
        list->head = currentNode->next;
        lastNode->next = list->head;
        free(currentNode);
    }
}

void deleteEnd(struct CircularLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* currentNode = list->head;
    struct Node* prevNode = NULL;
    while (currentNode->next != list->head) {
        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    if (prevNode == NULL) {
        list->head = NULL;
        free(currentNode);
    } else {
        prevNode->next = list->head;
        free(currentNode);
    }
}

int main() {
    struct CircularLinkedList list;
    initializeList(&list);

    insertFront(&list, 10);
    insertFront(&list, 20);
    insertEnd(&list, 30);
    insertEnd(&list, 40);

    printList(&list);

    deleteFront(&list);
    deleteEnd(&list);

    printList(&list);

    return 0;
}