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


    printList(firstList);

    return 0;
}