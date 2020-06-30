#include <stdlib.h>
#include <assert.h>
#include "queue.h"

void initQueue(Queue* ps, int size)
{
	ps->pArr = malloc(sizeof(int) * size);
	assert(ps->pArr);
	ps->size = size;
	ps->front = 0;
	ps->rear = 0;
}

void cleanupQueue(Queue* ps)
{
	free(ps->pArr);
}

void push(Queue* ps, int data)
{
	//assert(ps->rear != ps->size);

	ps->pArr[ps->rear] = data;
	++ps->rear;
}

int pop(Queue* ps)
{
	//assert(ps->front);

	//--ps->rear;
	return ps->pArr[ps->front++];
}