/*
 * There are some errors in this implementation of a binary search.
 * Try to spot as many as you can!
 * 
 * /HINT/ The errors aren't in main (hopefully at least...)
 * ~arm
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 10

int binary_search(int *arr, int x, int lo, int hi);
int search(int *arr, int x, int n);

int main(void)
{
    int n_arr[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int integerToSearch = 23;
    printf("Is %d in arr? %d\n", integerToSearch, search(n_arr, integerToSearch, LEN));
}

/*
 * Why doesn't our main function just directly call binary_search if
 * all search is doing is call binary_search?
 * (Imagine that search and binary_search were defined in a different file)
 */
int search(int *arr, int x, int n)
{
    return binary_search(arr, x, 0, n);
}

/*
 * binary_search: 'fast' implementation of search
 *      Precondition: array must be in sorted order
 *      Postcondition: if the array contains the 'x', return 1 else 0
 *                     array is not mutated in any way (i.e. read perms only)
 */
int binary_search(int *arr, int x, int lo, int hi)
{
    // if the left hand side of the array we're looking is right of the rhs?
    // that doesn't make any sense, so that must mean our x doesn't exist!
    if (lo > hi) return 0;

    // look at the middle of the sorted array[lo..hi]
    int mid = (lo+hi) / 2;

    // check if the middle is our x we're looking for
    if (arr[mid] == x) return 1;

    // okay, so the middle is not our x. Well since our array is sorted this can go two ways.
    // (1) if our x is less than the arr[mid], then it must be in the range between indices lo and mid
    // (2) otherwise, our x must be on the rhs of arr[mid], then it must be in the range between indices mid and hi
    if (x < arr[mid]) binary_search(arr, x, lo, mid);
    else binary_search(arr, x, mid, hi);
}


