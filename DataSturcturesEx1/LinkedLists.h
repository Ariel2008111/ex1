#ifndef LINKED_LIST_H
#define LINKED_LIST_H
typedef struct Node 
{
    int data;
    Node* next;//each node
}Node;
typedef struct LinkedList 
{
    Node* head;
} LinkedList;
void printList(Node* head);
void addToHead(Node** head, int value);
void removeFromHead(Node** head);
void deleteList(Node** head);

#endif 