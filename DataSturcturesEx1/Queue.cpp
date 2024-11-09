#include "Queue.h"
#include <iostream>
void initQueue(Queue* q, unsigned int size) 
{
    q->capacity = size;
    q->size = 0;
    q->front = 0;
    q->rear = -1;
    q->queueElements = new int[q->capacity];
}
void cleanQueue(Queue* q) 
{
    delete[]q->queueElements;
    q->queueElements = nullptr;
}
void enqueue(Queue* q, unsigned int newValue) 
{
    if (q->size == q->capacity) 
    {
        std::cout << "Queue is full\n";
    }
    else 
    {
        q->size++;
        q->rear = (q->rear + 1) % q->capacity;
        q->queueElements[q->rear] = newValue;
    }
}
int dequeue(Queue* q) 
{
    int valueElement;
    if (q->size == 0) 
    {
        std::cout << "Queue is empty\n";
        return -1;
    }

    valueElement = q->queueElements[q->front];

    q->size--;
    q->front = (q->front + 1) % q->capacity;

    return valueElement;
}
bool isEmpty(Queue* s) 
{
    return s->size == 0;
}
bool isFull(Queue* s) 
{
    return s -> size == s->capacity;
}