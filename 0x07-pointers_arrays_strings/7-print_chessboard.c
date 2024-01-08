#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Prints the chessboard.
 *
 * @a: A pointer to an array of the chessboard.
 */


void print_chessboard(char (*a)[8])
{
unsigned int i = 0, j;

while (i < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}
}
