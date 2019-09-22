#ifndef _LINKEDLIST
#define _LINKEDLIST

/* ADTs? */

typedef struct _list *LinkedList;

LinkedList LinkedListInit();
LinkedList LinkedListAppend(LinkedList, int);
void LinkedListShow(LinkedList);
int LinkedListSum(LinkedList);

#endif
