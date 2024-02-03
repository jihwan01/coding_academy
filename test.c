#include <stdio.h>

#define MAX_SIZE 1000000 // 큐의 최대 크기

//2164
typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
    int maxSize;
} Queue;

// 큐 초기화 함수
void initQueue(Queue *q, int size) {
    q->front = -1;
    q->rear = -1;
    q->maxSize = size;
}

// 큐가 비어 있는지 확인하는 함수
int isEmpty(Queue *q) {
    return q->front == -1;
}

// 큐가 가득 찼는지 확인하는 함수
int isFull(Queue *q) {
    return (q->rear + 1) % q->maxSize == q->front;
}

// 큐에 요소를 추가하는 함수
void enqueue(Queue *q, int item) {
    if (isFull(q)) {
        printf("Queue is full!\n");
    } else {
        if (q->front == -1) q->front = 0;
        q->rear = (q->rear + 1) % q->maxSize;
        q->items[q->rear] = item;
    }
}

// 큐에서 요소를 제거하고 반환하는 함수
int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    } else {
        int item = q->items[q->front];
        if (q->front == q->rear) {
            // 큐에 단 하나의 요소가 있었다면 초기화
            q->front = -1;
            q->rear = -1;
        } else {
            q->front = (q->front + 1) % q->maxSize;
        }
        return item;
    }
}

int main() {
    Queue q;
    initQueue(&q, MAX_SIZE);
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        enqueue(&q, i);
    }
    while (q.front != q.rear) {
        dequeue(&q); // 제일 위 카드를 버림
        enqueue(&q, dequeue(&q)); // 다음 제일 위 카드를 아래로 이동
    }

    printf("%d\n", dequeue(&q)); // 마지막으로 남은 카드 출력

    return 0;
}