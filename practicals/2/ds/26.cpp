#include <stdio.h>
#define MAX_SIZE 5

struct CircularQueue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

void initialiseQueue(struct CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(struct CircularQueue *q) {
    return (q->front == 0 && q->rear == MAX_SIZE - 1) || (q->front == q->rear + 1);
}

int isEmpty(struct CircularQueue *q) {
    return q->front == -1;
}

void enqueue(struct CircularQueue *q, int value) {
    if (isFull(q)) {
        printf("Error: Queue is full\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
        q->rear = 0;
    } else if (q->rear == MAX_SIZE - 1) {
        q->rear = 0;
    } else {
        q->rear += 1;
    }

    q->items[q->rear] = value;
    printf("Enqueued: %d\n", value);
}

int dequeue(struct CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Error: Queue is empty\n");
        return -1;
    }

    int dequeuedValue = q->items[q->front];

    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else if (q->front == MAX_SIZE - 1) {
        q->front = 0;
    } else {
        q->front += 1;
    }

    printf("Dequeued: %d\n", dequeuedValue);
    return dequeuedValue;
}

void display(struct CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");

    if (q->rear >= q->front) {
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
    } else {
        for (int i = q->front; i < MAX_SIZE; i++) {
            printf("%d ", q->items[i]);
        }
        for (int i = 0; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
    }

    printf("\n");
}

int main() {
    struct CircularQueue q;
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
