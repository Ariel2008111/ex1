#include "Utils.h"
#include <iostream>
#include "stack.h"
void reverse(int* nums, unsigned int size) 
{
    int i = 0;
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
    int* nums = new int[10];
    int i = 0;
    std::cout << "Please enter 10 integers:" << std::endl;


    for (i = 0; i < 10; ++i)
    {
        std::cin >> nums[i];
    }
    //use the fucntion from before
    reverse(nums, 10);


    return nums;
}