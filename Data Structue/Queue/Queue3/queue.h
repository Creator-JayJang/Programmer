#ifndef QUEUE_H
#define QUEUE_H
#define QUEUESIZE 100

typedef struct queue {

	int arr[QUEUESIZE];
	int front;
	int rear;

} Queue; 		// typedef

void initQueue(Queue* ps);

void push(Queue* ps, int data);
int pop(Queue* ps);

#endif