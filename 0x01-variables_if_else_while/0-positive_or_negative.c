#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print whether the number stored in the variable n is positive or negative
 * return (0) )success)
 */
int main(void)
{
	srand(time(NULL));
	int n = rand() - RAND_MAX / 2
	if (n > 0)
	{
        printf("%d is positive\n", n);
        } else if (n < 0) {
        printf("%d is negative\n", n);
        } else {
        printf("%d zero\n", n);
               }
	return (0);
}
