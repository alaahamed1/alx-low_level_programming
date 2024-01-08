#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: pointer the first element of the two-dimensional array
 * @size: the size of the square matrix of integers.
 */
void print_diagsums(int *a, int size)
{
int prim = 0;
int sec = 0;
int i;

for (i = 0; i < size; i++)
{
prim += a[i * size + i];
sec += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", prim, sec);
}
