/*
 * Showcase different ways to sum a list as well as a 
 * simple unit test library! (Will be useful for lab 2)
 * 
 * ~arm
 */

#include <stdio.h>
#include "linkedlist.h"

int main(void)
{
    LinkedList l = LinkedListInit();
    LinkedListAppend(l,1);
    LinkedListAppend(l,2);
    LinkedListAppend(l,3);
    LinkedListAppend(l,4);
    LinkedListAppend(l,5);
    LinkedListAppend(l,6);
    LinkedListShow(l);
    printf("%d\n", LinkedListSum(l));
}

