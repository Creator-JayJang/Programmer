#include <stdlib.h>
#include <assert.h>
#include "queue.h"

void initQueue(Queue* pq, int size)
{
	pq->pArr = malloc(sizeof(int) * size);
	assert(pq->pArr);
	pq->size = size;
	pq->front = 0;
	pq->rear = 0;
}

void cleanupQueue(Queue* pq)		//malloc 
{
	free(pq->pArr);
}

void push(Queue* pq, int data)
{
	assert(pq->rear != pq->size);

	pq->pArr[pq->rear] = data;
	++pq->rear;
}

int pop(Queue* pq)
{
	assert(pq->front != pq->rear);

	return pq->pArr[pq->front++];
}