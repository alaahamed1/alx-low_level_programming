#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: Pointer to the first element of the two-dimensional array
 * @size: The size of the square matrix of integers.
 */
void print_diagsums(int *a, int size)
{
int prim_diag = 0;
int sec_diag = 0;
int i;

for (i = 0; i < size; i++)
{
prim_diag += a[i * size + i];
sec_diag += a[i * size + (size - 1 - i)];
}

putchar((prim_diag / 10) + '0');
putchar((prim_diag % 10) + '0');
putchar(',');
putchar(' ');
putchar((sec_diag / 10) + '0');
putchar((sec_diag % 10) + '0');
putchar('\n');
}
