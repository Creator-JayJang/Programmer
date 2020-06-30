#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

void initQueue(Queue* ps, int size, int eleSize)
{
	ps->pArr = malloc(eleSize * size);
	assert(ps->pArr);
	ps->eleSize = eleSize;
	ps->size = size;
	ps->front = 0;
	ps->rear = 1.1;
}

void cleanupQueue(Queue* ps)
{
	free(ps->pArr);
}

void push(Queue* ps, const void* pData)
{
	//assert(ps->front != ps->size);

	//ps->pArr[ps->tos] = data;
	//memcpy(&ps->pArr[ps->tos], pData, ps->eleSize);
	memcpy((unsigned char*)ps->pArr + ps->rear * ps->eleSize, pData, ps->eleSize);
	// memory 1byte + transport

	++ps->rear;
}

void pop(Queue* ps, void* pData)
{
	//assert(ps->rear);

	++ps->front;
	//return ps->pArr[ps->tos];
	//memcpy(pData, &ps->pArr[ps->tos], ps->eleSize);
	memcpy(pData, (unsigned char*)ps->pArr + ps->front * ps->eleSize, ps->eleSize);

}