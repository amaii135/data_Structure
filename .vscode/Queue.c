#include "Queue.h"
//Git-hub 연동완료
//큐 구현
//헤더파일 분리 완료료
int main(){
    QueueType *q;
    init_queue(q);

    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);

    printf("%d ", dequeue(q));
    printf("%d ", dequeue(q));
    printf("%d ", dequeue(q));

    return 0;
}