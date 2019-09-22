/*
 * Extremely spartan linked list library
 * Accentuate definition and benefits of an ADT
 * 
 * ~arm
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct _list {
    int val;
    struct _list *next;
};

typedef struct _list *LinkedList;

static int LinkedListSumRecurse(LinkedList l);
static int LinkedListSumIter(LinkedList l);

LinkedList LinkedListInit()
{
    return NULL;
}

static LinkedList createNewNode(int v)
{
    LinkedList node = malloc(sizeof(struct _list));
    if (node == NULL) {
	fprintf(stderr, "no memory left :(");
	/* exit */
    }
    node->val = v;
    node->next = NULL;
    return node;
}

LinkedList LinkedListAppend(LinkedList l, int v)
{
   if (l == NULL) {
	return createNewNode(v);
   }
   LinkedList curr = l;
   while (curr->next != NULL) {
	curr = curr->next;
   }
   curr->next = createNewNode(v);
   return l;
}
// Q: Constant time append?

void LinkedListShow()
{
    /* TODO */
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
    if (l == NULL) return 0;
    int sumOfTheRestOfTheList = LinkedListSumRecurse(l->next);
    return sumOfTheRestOfTheList + l->val;
}

6

^

f([1] -> [2] -> [3])
 | sumOf... = 5
 | l->val + sumOf = 1 + 5 = 6

f([2]->([3]->NULL))
 | sumOF... = 3
 | l->val + sumOf... = 2 + 3 = 5

f([3]->NULL) => 3
 | sumOfTheRestOFThel.. = 0
 | l->val = 3,  => 3 + 0 => 3

f(NULL) => 0

static int LinkedListSumIter(LinkedList l)
{
    /* TODO :) */
}








