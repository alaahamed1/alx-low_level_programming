#include "main.h"

/**
* print_line - Draws a straight line in the terminal
* @n: Number of times the character '_' should be printed
*/

void print_line(int n)
{
while (n > 0)
{
if (n <= 0)
{
_putchar('\n');
return;
}
_putchar('_');
n--;
}
_putchar('\n');
}
