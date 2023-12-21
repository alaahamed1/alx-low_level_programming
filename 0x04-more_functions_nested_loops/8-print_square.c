#include "main.h"

/**
* print_square - prints a square of a specified size
* @size: the size of the square
*/

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
int a = 0;
while (a < size)
{
int b = 0;
while (b < size)
{
_putchar('#');
b++;
}
_putchar('\n');
a++;
}
}
