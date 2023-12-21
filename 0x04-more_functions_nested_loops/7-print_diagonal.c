#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal
* @n: Number of times the character '\' should be printed
*/

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
while (n > 0)
{
_putchar('\\');
_putchar('\n');
n--;
}
}
