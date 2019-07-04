#include "stdio.h"
#include "LinkedList/linkedlist.h"

int main()
{
    
    node_ptr firstList = NULL;
    node_ptr secondList = NULL;

    firstList = addNode(firstList, 10);

    if(firstList == NULL)
    {
        return 1;
    }
    
    addNode(firstList, 29);
    addNode(firstList, 5);
    firstList = addNodeFront(firstList, 33); //new head is updated
    addNodePos(firstList, 3, 3); //insert new node at specified position

    printList(firstList);

    return 0;
}