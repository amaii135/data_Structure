#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

typedef int element;

typedef struct{
    int front;
    int rear;
    element *data;
}QueueType;

int is_full(QueueType *q) {
    return (q->rear == SIZE - 1);
}

int is_empty(QueueType *q) {
    return (q->front == q->rear);
}

void init_queue(QueueType *q) {
    q->front = -1;
    q->rear = -1;
    q->data = malloc(sizeof(element) * SIZE);
    if (q->data == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        exit(1);
    }
}

void enqueue(QueueType *q, element e) {
    if (is_full(q)) {
        printf("큐 포화에러\n");
        return;
    }
    q->data[++(q->rear)] = e;
}

element dequeue(QueueType *q) {
    if (is_empty(q)) {
        printf("큐 공백에러\n");
        exit(1);
    }
    return q->data[++(q->front)];
}