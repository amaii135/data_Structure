#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
//Git-hub 연동완료
//큐 구현

typedef int element;
typedef struct{
    int front;
    int rear;
    int *data;
}QueueType;

int is_full(QueueType *q){
  return (q->rear==SIZE-1);  
}
int is_empty(QueueType *q){
    return (q->front==q->rear);
}
void init_Queue(QueueType *q){
    q->front=-1;
    q->rear=-1;
    (int*)q->data=malloc(sizeof(int)*SIZE);
}
void enqueue(QueueType *q, element e){
    if(is_full(q)){
        printf("큐 포화에러");
    }
    q->data[++(q->rear)]=e;
};
int dequeue(QueueType *q){
    if(is_empty(q)){
        printf("큐 공백에러");
        exit(1);
    }
    return q->data[(q->front)--];
}

int main(){

    QueueType*q;
    (QueueType*)q=malloc(sizeof(QueueType*));
    init_Queue(q);

    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);

    printf("%d ", dequeue(q));
    printf("%d ", dequeue(q));
    printf("%d ", dequeue(q));











    return 0;
}