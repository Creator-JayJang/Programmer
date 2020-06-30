#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initQueue(Queue* ps)
{
	ps->front = 0;
	ps->rear = 0;

}

void push(Queue* ps, int data)
{
	if (ps->rear == QUEUESIZE) {
		fprintf(stderr, "rear is full\n");
		exit(1);
	}


	ps->arr[ps->rear] = data;
	++ps->rear;
}

int pop(Queue* ps)
{
	if (ps->front == QUEUESIZE) {
		fprintf(stderr, "front is empty\n");
		exit(2);
	}

	return ps->arr[ps->front++];
	//ps->rear--;
}