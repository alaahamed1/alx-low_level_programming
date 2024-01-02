#include "main.h"

/**
* print_array - prints n elements of an array of integers followed by a new line.
* @a: name of the given array
* @n: is the number of elements of that array
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i != n - 1)
{
printf(", ");
}
}
}
