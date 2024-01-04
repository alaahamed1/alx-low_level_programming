#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer using _putchar
 * @n: The number to print
 * Description: This function prints an integer using only the _putchar function.
 *It does not use long, arrays, pointers, or hard-coded special values.
 *If the number is negative, it starts by printing the negative sign '-'
 *followed by the absolute value of the number
 */

void print_number(int n)
{
unsigned int npos, dev = 1;

if (n < 0)
{
_putchar('-');
npos = -n;
}
else
npos = n;

while (npos / dev >= 10)
dev *= 10;

while (dev != 0)
{
_putchar((npos / dev) + '0');
npos %= dev;
dev /= 10;
}
}
