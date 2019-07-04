/*
Name: linkedlist.h
Desc: Singly Linked List
 */

#include<stdio.h>
#include<stdlib.h>

//Linked list implemented with data and pointer
typedef struct linkedList
{
    int data;
    struct linkedList *next; //Self-referencing Pointer for next node
}LinkedList;

typedef LinkedList* node_ptr;

node_ptr createNode();

node_ptr addNode(node_ptr head, int value);

void printList(node_ptr n);