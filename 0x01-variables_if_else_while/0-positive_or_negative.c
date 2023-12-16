#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print whether the number stored in the variable n is positive or negative
 * Return: returns 0 on success
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
