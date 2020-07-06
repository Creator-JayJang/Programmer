#ifndef QUEUE_H
#define QUEUE_H
#define QUEUESIZE 100

class Queue {

private:
	//int arr[QUEUESIZE];
	int* pArr;
	int size;
	int front;
	int rear;

public:
	Queue(int size);
	~Queue();

	void push(int data);
	int pop();

}; 		// typedef

#endif