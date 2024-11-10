#include "LinkedLists.h"
#include <iostream>

void addToHead(Node** head, int value) 
{
    Node* newNode = new Node();
    newNode->data = value;
    if (!*head)
    {
        *head = newNode;
    }
    else 
    {
        newNode->next = *head;
        *head = newNode;
    }  
}
void printList(Node* head)
{
    Node* current = 0;
    if (head == nullptr)//check if empty
    {
        std::cout << "List is empty.";
    }
    else
    {
        current = head;
        while (current != nullptr) 
        {
            std::cout << current->data << " ";
            current = current->next;
        }
    }
}
void removeFromHead(Node** head)
{
    Node* temp = 0;
    if (!*head)
    {
        std::cout << "List is empty.";
    }
    else 
    {
        temp = *head;
        *head = (*head)->next;
        delete temp;
    }
}
void deleteList(Node** head) 
{
    Node* temp = 0;
    while (*head)
    {
        temp = *head;
        *head = (*head)->next;
        delete temp;
    }
    *head = nullptr;
}