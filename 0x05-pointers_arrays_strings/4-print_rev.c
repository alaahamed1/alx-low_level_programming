#include "main.h"
#include <stdio.h>

/**
*print_rev - prints a string, in reverse, followed by a new line
*@s: the pointer of string
*/


void print_rev(char *s)
{
int len = 0;
int i;

while (s[i] != '\0')
{
i++;
for (i = i - 1; i != 0; i--)
{
_putchar(s[i]);
}
}
_putchar('\n');
}
