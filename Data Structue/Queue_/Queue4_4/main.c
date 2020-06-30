#include <stdio.h>
#include "queue.h"

int main(void)
{
	Queue q1, q2;

	//q1.front = q1.rear = 0;
	//q2.front = q2.rear = 0;

	initQueue(&q1, 10);
	initQueue(&q2, 100); 		// arrange size

	push(&q1, 100);
	push(&q1, 200);
	push(&q1, 300);

	printf("q1 1st pop() : %d\n", pop(&q1));
	printf("q1 2nd pop() : %d\n", pop(&q1));
	printf("q1 3nd pop() : %d\n", pop(&q1));

	push(&q2, 900);
	push(&q2, 800);
	push(&q2, 700);

	printf("q2 1st pop() : %d\n", pop(&q2));
	printf("q2 2nd pop() : %d\n", pop(&q2));
	printf("q2 3nd pop() : %d\n", pop(&q2));

	cleanupQueue(&q1);
	cleanupQueue(&q2);

	return 0;
}
