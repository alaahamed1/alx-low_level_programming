#include "main.h"


/**
 * print_times_table - printsthe times inputed
 * starting with 0.
 *@n: the value of the timea table printed
*/


void print_times_table(int n)
{
int row, col, res;

if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
_putchar('0');
for (col = 1; col <= n; col++)
{
_putchar(',');
_putchar(' ');
res = row * col;
if (res <= 99)
_putchar(' ');
if (res <= 9)
_putchar(' ');
if (res >= 100)
{
_putchar((res / 100) + '0');
_putchar(((res / 10)) % 10 + '0');
}
else if (res <= 99 && res >= 10)
{
_putchar((res / 10) + '0');
}
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
}
