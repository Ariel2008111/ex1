#ifndef LINKED_LIST_H
#define LINKED_LIST_H
typedef struct Node 
{
    int data;
    Node* next;
}Node;
typedef struct LinkedList 
{
    Node* head;
} LinkedList;
Node* createList();
void printList(Node* head);
void addToHead(Node** head, int value);
void removeFromHead(Node** head);
void deleteList(Node** head);

#endif 