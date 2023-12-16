#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * Return: Always returns 0 to indicate success
 */
int main(void)
{
    int n;

    srand(time(NULL));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n", n);

    return (0);
}
