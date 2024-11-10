#include "Utils.h"
#include <iostream>
#include "stack.h"
void reverse(int* nums, unsigned int size) 
{
    unsigned int i = 0;
    Stack stack;
    initStack(&stack);
    for (i = 0; i < size; i++) 
    {
        push(&stack, nums[i]);
    }
    for (i = 0; i < size; i++) 
    {
        nums[i] = pop(&stack);
    }

}
int* reverse10() 
{
    int numbers[10];
    int i = 0;
    std::cout << "Please enter ten integers:";
    for (i = 0; i < 10; i++) 
    {
        std::cout << "Enter number:\n";
        std::cin >> numbers[i];
    }
    int* reversedArray = new int[10];
    for (int i = 0; i < 10; ++i)
    {
        reversedArray[i] = numbers[9 - i]; 
    }
    Stack* stack = new Stack();
    initStack(stack);
    for (i = 9; i >= 0; i--) 
    {
        push(stack, numbers[i]);
    }

    int index = 0;
    while (!isEmpty(stack)) 
    {
        reversedArray[index++] = pop(stack);
    }

    delete stack; //Free
    return reversedArray;
}