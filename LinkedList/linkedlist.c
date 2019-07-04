#include "linkedlist.h"

node_ptr createNode() 
{
    node_ptr temp; //declare node
    temp = (node_ptr)malloc( sizeof(LinkedList) ); //allocate memory
    if(temp == NULL)
    {
        return NULL;
    }
    temp->next = NULL; //make next  point to null
    return temp; //return new node
}

node_ptr addNode(node_ptr head, int value)
{
    node_ptr temp, p; //declare two nodes temp and p
    temp = createNode(); //create node will return new node with data = value and next pointing to NULL

    if(temp == NULL)
    {
        return NULL;
    }

    temp->data = value; //add element value to data part of node

    if(head == NULL)
    {
        head = temp; //when linked list is empty
    }
    else
    {
        p = head; //assign head to p
        while(p->next != NULL)
        {
            p = p->next; //traverse list until p is last node. last node always point to NULL.
        }
        p->next = temp; //point previous last node to new node created
    }
    return head;
}

//Output list of nodes
void printList(node_ptr n)
{
    while(n != NULL)
    {
        printf("Data value is: %i\n", n->data);
        n = n->next;
    }
}