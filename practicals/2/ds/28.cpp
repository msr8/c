#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int priority;
    struct Node* next;
};

struct PriorityQueue {
    struct Node* front;
};

void initialiseQueue(struct PriorityQueue* pq) {
    pq->front = NULL;
}

int isEmpty(struct PriorityQueue* pq) {
    return pq->front == NULL;
}

void enqueue(struct PriorityQueue* pq, int value, int priority) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->priority = priority;
    newNode->next = NULL;

    if (isEmpty(pq) || priority < pq->front->priority) {
        newNode->next = pq->front;
        pq->front = newNode;
    } else {
        struct Node* temp = pq->front;
        while (temp->next != NULL && temp->next->priority <= priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Enqueued: %d (Priority: %d)\n", value, priority);
}

int dequeue(struct PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Error: Queue is empty\n");
        return -1;
    }

    struct Node* temp = pq->front;
    int dequeuedValue = temp->data;

    pq->front = pq->front->next;
    free(temp);

    printf("Dequeued: %d\n", dequeuedValue);
    return dequeuedValue;
}

void display(struct PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Priority Queue: ");
    struct Node* currNode = pq->front;
    while (currNode != NULL) {
        printf("%d (Priority: %d) ", currNode->data, currNode->priority);
        currNode = currNode->next;
    }
    printf("\n");
}

int main() {
    struct PriorityQueue pq;
    initialiseQueue(&pq);

    enqueue(&pq, 1, 3);
    enqueue(&pq, 2, 2);
    enqueue(&pq, 3, 1);
    enqueue(&pq, 4, 2);
    enqueue(&pq, 5, 1);

    display(&pq);

    dequeue(&pq);
    dequeue(&pq);

    display(&pq);

    enqueue(&pq, 6, 1);
    enqueue(&pq, 7, 3);

    display(&pq);

    printf("\n");
}