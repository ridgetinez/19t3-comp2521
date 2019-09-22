/* 
 * A simple main driver to show CLI input output.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("argc = %d\n", argc);
    
    for (int i = 0; i < argc; i++) {
	printf("%d: %s\n", i, argv[i]);
    }

    exit(EXIT_SUCCESS);
}
