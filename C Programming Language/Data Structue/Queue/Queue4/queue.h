#ifndef QUEUE_H
#define QUEUE_H
#define QUEUESIZE 100

typedef struct {

	//int arr[QUEUESIZE];
	int* pArr;
	int size;
	int front;
	int rear;

} Queue; 		// typedef

void initQueue(Queue* ps, int size);
void cleanupQueue(Queue* ps);

void push(Queue* ps, int data);
int pop(Queue* ps);

#endif