#include "Stack.h"
void initStack(Stack* s) 
{
    s->top = nullptr;//Null
}
void push(Stack* s, unsigned int element) 
{
    addToHead(&s->top, element);
}
bool isEmpty(Stack* s) 
{
    return s->top == nullptr;//Null
}
bool isFull(Stack* s) {
    //dont have max size because its a list and not array
    return s->top != nullptr;
}
int pop(Stack* s) 
{
    int value = 0;
    Node* temp = 0;
    //check for empty
    if (isEmpty(s)) 
    {
        return -1; 
    }

    value = s->top->data;
    temp = s->top;
    s->top = s->top->next;
    delete temp;
    return value;
}
void cleanStack(Stack* s) 
{
    while (!isEmpty(s)) 
    {
        pop(s);
    }
    s->top = nullptr;//NULL for Top
}