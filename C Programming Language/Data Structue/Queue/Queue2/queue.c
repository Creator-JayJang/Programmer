static int queue[100];
static int front = 0;
static int rear;

void push(int data)
{

	queue[rear] = data;
	++rear;
}

int pop(void)
{
	return queue[front++];
}