#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer
 * only use _putchar function to print
 * not allowed to use long
 * not allowed to use arrays or pointers
 * not allowed to hard-code special values
 * @n: a number to print
 */

void print_number(int n)
{
int divisor = 1;

if (n < 0)
{
_putchar('-');
n = -n;
}

while (n / divisor >= 10)
{
divisor *= 10;
}

while (divisor != 0)
{
_putchar((n / divisor) +'0');
n %= divisor;
divisor /= 10;
}
}
