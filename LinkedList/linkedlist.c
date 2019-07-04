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
        printf("POINTER IS NULL. No node was create");
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

node_ptr addNodeFront(node_ptr head, int value)
{
    node_ptr node, temp;

    node = createNode();

    if(node == NULL)
    {
        printf("POINTER IS NULL. No node was create");
        return NULL;
    } 

    node->data = value; //update data of node with value
    node->next = head; //update next ptr with current head ptr

    return node; //return this node as list entry point
}

void addNodePos(node_ptr head, int value, int pos)
{
    node_ptr node, temp;

    node = createNode();

    if(node == NULL)
    {
        printf("POINTER IS NULL. No node was create");
        return; //stop execution
    }

    node->data = value; //update data of node with value

    temp = head;
    for(int i = 1; i != pos-1; i++)
    {
        temp = temp->next;

        node->next = temp->next; //update new node next pointer with original pos pointer
        temp->next = node; //point previous node to new node pointer
    }
}

//Output list of nodes
void printList(node_ptr n)
{
    int i = 1;
    while(n != NULL)
    {
        printf("%i. Data value is: %i\n", i, n->data);
        n = n->next;
        i++;
    }
}