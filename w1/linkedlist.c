/*
 * Extremely spartan linked list library
 * Accentuate definition and benefits of an ADT
 * 
 * ~arm
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

typedef struct _list {
    int val;
    struct _list *next;
} *LinkedList;

static int LinkedListSumRecurse(LinkedList l);
static int LinkedListSumIter(LinkedList l);

LinkedList LinkedListInit()
{
    /* TODO */
    return NULL;
}

void LinkedListAppend(LinkedList l, int v)
{
    /* TODO */
    return;
}

int LinkedListSum(LinkedList l)
{
    return LinkedListSumIter(l);
}


// Specify: for a linked list l, sum up the values in it.
// (1) Assume that my function does that already
// (2) Think about your base cases, i.e. linked lists, where I 100% know the value when I'm given it.
static int LinkedListSumRecurse(LinkedList l)
{
    /* TODO :) */
}

static int LinkedListSumIter(LinkedList l)
{
    /* TODO :) */
}
