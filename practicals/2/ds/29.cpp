#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue {
    int data[MAX_SIZE];
    int front;
    int rear;
};

void initialiseQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(struct Queue* q) {
    return q->front == -1;
}

int isFull(struct Queue* q) {
    return (q->rear + 1) % MAX_SIZE == q->front;
}

void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Error: Queue is full\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
    }

    q->rear = (q->rear + 1) % MAX_SIZE;
    q->data[q->rear] = value;

    printf("Enqueued: %d\n", value);
}

int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Error: Queue is empty\n");
        return -1;
    }

    int dequeuedValue = q->data[q->front];

    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX_SIZE;
    }

    printf("Dequeued: %d\n", dequeuedValue);
    return dequeuedValue;
}

void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    int i = q->front;
    while (i != q->rear) {
        printf("%d ", q->data[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", q->data[q->rear]);
}

int main() {
    struct Queue q;
    initialiseQueue(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    display(&q);

    dequeue(&q);
    dequeue(&q);

    display(&q);

    enqueue(&q, 6);
    enqueue(&q, 7);

    display(&q);

    printf("\n");
}