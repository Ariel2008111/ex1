#ifndef STACK_H
#define STACK_H
#include "LinkedLists.h"

/* A positive-integer value stack, with no size limit */
typedef struct Stack
{
	Node* top;
} Stack;

void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is Empty

void initStack(Stack* s);
void cleanStack(Stack* s);

bool isEmpty(Stack* s);
bool isFull(Stack* s);

#endif // STACK_H