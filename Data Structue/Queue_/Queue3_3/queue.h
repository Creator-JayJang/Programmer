#ifndef QUEUE_H		// Duplication 
#define QUEUE_H
#define QUEUESIZE 100

typedef struct {
	int arr[QUEUESIZE];
	int front;
	int rear;
}Queue;

void initQueue(Queue* pq);

void push(Queue* pq, int data);
int pop(Queue* pq);

#endif