#include "queue.h"

void initQueue(Queue* pq)
{
	pq->front = 0;
	pq->rear = 0;
}

void push(Queue* pq, int data)
{
	pq->arr[pq->rear] = data;
	++pq->rear;
}

int pop(Queue* pq)
{
	return pq->arr[pq->front++];
}