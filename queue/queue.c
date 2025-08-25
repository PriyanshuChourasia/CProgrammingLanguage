#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 10

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initialize_queue(Queue* q) {
    q->front = -1;
    q->rear = 0;
}

bool isEmpty(Queue* q) {
    return q->front == q->rear - 1;
}

bool isFull(Queue* q) {
    return q->rear == MAX_SIZE;
}

void enqueue(Queue* q,const int val) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    q->items[q->rear] = val;
    q->rear++;
}

void dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty");
        return;
    }
    q->front++;
}

int peek(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty");
        return -1;
    }
    return q->items[q->front + 1];
}

void print_queue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    for (int i= q->front+1; i<q->rear; i++) {
        printf("%d\n",q->items[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    initialize_queue(&q);

    enqueue(&q,10);
    // print_queue(&q);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    // print_queue(&q);
    enqueue(&q,50);
    enqueue(&q,60);
    enqueue(&q,70);
    enqueue(&q,80);
    enqueue(&q,90);
    enqueue(&q,100);

    print_queue(&q);
    //
    printf("Peek value: %d\n",peek(&q));

    dequeue(&q);
    print_queue(&q);
    dequeue(&q);
    print_queue(&q);
    enqueue(&q,110);
    printf("Front element: %d\n",peek(&q));
    printf("Front: %d\n",q.front);
    printf("Rear: %d",q.rear);

    return 0;
}