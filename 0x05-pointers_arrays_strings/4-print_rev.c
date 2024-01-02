#include "main.h"
#include <stdio.h>

/**
*print_rev - prints a string, in reverse, followed by a new line
*@s: the pointer of string
*/


void print_rev(char *s)
{
int i;

while (s[i] != '\0')
{
i++;
if (i > 0)
{
for (i = i - 1; i >= 0; i--)
{
putchar(s[i]);
}
}
}
putchar('\n');
}
