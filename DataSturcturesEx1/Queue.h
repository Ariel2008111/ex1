#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct Queue
{
	int front;
	int rear;
	int size;
	int capacity;
	int* queueElements;
	
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // Return Element in top of queue, or -1 if Empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */