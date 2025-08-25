#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 50

typedef struct {
    int items[MAX_SIZE];
    int front;
    int size;
    int capacity;
} CircularQueue;

void initialize_circular_queue(CircularQueue *cq, const int capacity) {
    cq->front = cq->size = 0;
    cq->capacity = capacity;
}

bool isEmpty(CircularQueue *cq) {
    return cq->size == 0;
}

bool isFull(CircularQueue *cq) {
    return cq->size == cq->capacity;
}

void enqueue(CircularQueue *cq, int val) {
    // printf("value entered: %d\n",val);
    if (isFull(cq)) {
        printf("Queue is full\n");
        return;
    }
    const int rear = (cq->front + cq->size) % cq->capacity;
    cq->items[rear] = val;
    cq->size++;
}

void dequeue(CircularQueue* cq) {
    if (isEmpty(cq)) {
        printf("Queue is empty\n");
        return;
    }
    cq->front = (cq->front+1) % cq->capacity;
    cq->size--;
}

void print_circular_queue(CircularQueue* cq) {
    if (isEmpty(cq)) {
        printf("Queue is empty");
        return;
    }
    for (int i=0; i<cq->size; i++) {
        const int index = (cq->front + i) % cq->capacity;
        printf("%d\n",cq->items[index]);
    }
}

int getFront(CircularQueue* cq) {
    return cq->items[cq->front];
}

int getRear(CircularQueue* cq) {
    const int rearIndex = (cq->front+ cq->size - 1) % cq->capacity;
    return cq->items[rearIndex];
}


int main() {
    CircularQueue cq;
    initialize_circular_queue(&cq,8);

    /* Enqueue the values */
    enqueue(&cq,76);
    enqueue(&cq,45);
    enqueue(&cq,48);
    enqueue(&cq,89);
    enqueue(&cq,115);
    enqueue(&cq,125);
    enqueue(&cq,211);
    enqueue(&cq,117);

    /* print the queue */
    print_circular_queue(&cq);
    printf("\nAfter Dequeue\n");

    dequeue(&cq);

    print_circular_queue(&cq);

    const int front = getFront(&cq);
    const int rear = getRear(&cq);
    printf("Front: %d\n",front);
    printf("Rear: %d\n",rear);

    enqueue(&cq,32);
    printf("\n After Enqueue again\n");
    print_circular_queue(&cq);
    return 0;
}