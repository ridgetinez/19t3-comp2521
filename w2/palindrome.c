#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Complexity? Iteration vs. recursion tradeoffs */

int isPalindromeIter(char *word)
{
  return 0;
}

int isPalindromeRec(char *word, int lo, int hi)
{
  return 0;
}

/* Main code attributed to Nicholas Hiebl: github.com/nick-hiebl */
int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Correct usage: %s <word>\n", argv[0]);
    return EXIT_FAILURE;
  }

  if (isPalindrome(argv[1])) {
    printf("yes\n");
  } else {
    printf("no\n");
  }

  return EXIT_SUCCESS;
}

