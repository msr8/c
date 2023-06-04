#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Deque {
    int data[MAX_SIZE];
    int front;
    int rear;
};

void initialiseDeque(struct Deque* dq) {
    dq->front = -1;
    dq->rear = -1;
}

int isEmpty(struct Deque* dq) {
    return dq->front == -1;
}

int isFull(struct Deque* dq) {
    return (dq->rear + 1) % MAX_SIZE == dq->front;
}

void insertFront(struct Deque* dq, int value) {
    if (isFull(dq)) {
        printf("Error: Deque is full\n");
        return;
    }

    if (isEmpty(dq)) {
        dq->front = 0;
        dq->rear = 0;
    } else {
        dq->front = (dq->front - 1 + MAX_SIZE) % MAX_SIZE;
    }

    dq->data[dq->front] = value;

    printf("Inserted at front: %d\n", value);
}

void insertRear(struct Deque* dq, int value) {
    if (isFull(dq)) {
        printf("Error: Deque is full\n");
        return;
    }

    if (isEmpty(dq)) {
        dq->front = 0;
        dq->rear = 0;
    } else {
        dq->rear = (dq->rear + 1) % MAX_SIZE;
    }

    dq->data[dq->rear] = value;

    printf("Inserted at rear: %d\n", value);
}

int deleteFront(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Error: Deque is empty\n");
        return -1;
    }

    int deletedValue = dq->data[dq->front];

    if (dq->front == dq->rear) {
        dq->front = -1;
        dq->rear = -1;
    } else {
        dq->front = (dq->front + 1) % MAX_SIZE;
    }

    printf("Deleted from front: %d\n", deletedValue);
    return deletedValue;
}

int deleteRear(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Error: Deque is empty\n");
        return -1;
    }

    int deletedValue = dq->data[dq->rear];

    if (dq->front == dq->rear) {
        dq->front = -1;
        dq->rear = -1;
    } else {
        dq->rear = (dq->rear - 1 + MAX_SIZE) % MAX_SIZE;
    }

    printf("Deleted from rear: %d\n", deletedValue);
    return deletedValue;
}

void display(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque: ");
    int i = dq->front;
    while (i != dq->rear) {
        printf("%d ", dq->data[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", dq->data[dq->rear]);
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

    insertFront(&dq, 5);
    insertRear(&dq, 6);

    display(&dq);

    printf("\n");
}