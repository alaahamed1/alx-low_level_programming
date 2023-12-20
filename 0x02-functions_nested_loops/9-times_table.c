#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
int x, y, res, tens, ones;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
res = x * y;
tens = res / 10;
ones = res % 10;
if (y == 0)
{
_putchar('0');
}
else if (res < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(ones + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(tens + '0');
_putchar(ones + '0');
}
}
_putchar('\n');
}
}
