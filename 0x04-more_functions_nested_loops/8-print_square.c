#include "main.h"

/**
* print_square - prints a square of a specified size
* @size: the size of the square
*/

void print_square(int size)
{
int a = 0;
int b = 0;

if (size <= 0)
{
_putchar('\n');
return;
}
while (a < size)
{
b = 0;
while (b < size)
{
_putchar('#');
b++;
}
_putchar('\n');
a++;
}
}
