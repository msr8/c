#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Deque {
    struct Node* front;
    struct Node* rear;
};

void initialiseDeque(struct Deque* dq) {
    dq->front = NULL;
    dq->rear = NULL;
}

int isEmpty(struct Deque* dq) {
    return dq->front == NULL;
}

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertFront(struct Deque* dq, int value) {
    struct Node* newNode = createNode(value);

    if (isEmpty(dq)) {
        dq->front = newNode;
        dq->rear = newNode;
    } else {
        newNode->next = dq->front;
        dq->front->prev = newNode;
        dq->front = newNode;
    }

    printf("Inserted at front: %d\n", value);
}

void insertRear(struct Deque* dq, int value) {
    struct Node* newNode = createNode(value);

    if (isEmpty(dq)) {
        dq->front = newNode;
        dq->rear = newNode;
    } else {
        newNode->prev = dq->rear;
        dq->rear->next = newNode;
        dq->rear = newNode;
    }

    printf("Inserted at rear: %d\n", value);
}

int deleteFront(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Error: Deque is empty\n");
        return -1;
    }

    struct Node* deletedNode = dq->front;
    int deletedValue = deletedNode->data;

    dq->front = dq->front->next;
    if (dq->front == NULL) {
        dq->rear = NULL;
    } else {
        dq->front->prev = NULL;
    }

    free(deletedNode);

    printf("Deleted from front: %d\n", deletedValue);
    return deletedValue;
}

int deleteRear(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Error: Deque is empty\n");
        return -1;
    }

    struct Node* deletedNode = dq->rear;
    int deletedValue = deletedNode->data;

    dq->rear = dq->rear->prev;
    if (dq->rear == NULL) {
        dq->front = NULL;
    } else {
        dq->rear->next = NULL;
    }

    free(deletedNode);

    printf("Deleted from rear: %d\n", deletedValue);
    return deletedValue;
}

void display(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty\n");
        return;
    }

    struct Node* current = dq->front;
    printf("Deque: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Deque dq;
    initialiseDeque(&dq);

    insertFront(&dq, 1);
    insertFront(&dq, 2);
    insertRear(&dq, 3);
    insertRear(&dq, 4);

    display(&dq);

    deleteFront(&dq);
    deleteRear(&dq);

    display(&dq);

    printf("\n");
}