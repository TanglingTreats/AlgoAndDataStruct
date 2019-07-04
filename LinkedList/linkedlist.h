/*
Name: linkedlist.h
Desc: Singly Linked List
 */

#include<stdio.h>
#include<stdlib.h>

//Linked list implemented with data and pointer.
typedef struct linkedList
{
    int data;
    struct linkedList *next; //Self-referencing Pointer for next node.
}LinkedList;

typedef LinkedList* node_ptr;

//Creates node with empty data and next pointer.
node_ptr createNode();

//Add a node to the list
node_ptr addNode(node_ptr head, int value);

//Add a node to the front of the list
node_ptr addNodeFront(node_ptr head, int value);

//Add a node at a specified position within the list.
//pos refers to an ordinal number. First, Second, Third and so on...
//If you are trying to add a node to the front of the list, consider addNodeFront() instead
void addNodePos(node_ptr head, int value, int pos);

//Cycles through linked list and prints data of each node
void printList(node_ptr n);