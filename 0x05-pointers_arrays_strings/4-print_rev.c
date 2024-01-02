#include "main.h"
#include <stdio.h>

/**
*print_rev - prints a string, in reverse, followed by a new line
*@s: the pointer of string
*/

void print_rev(char *s)
{
int length = 0;
int i;

while (s[length] != '\0')
{
length++;
}

for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}

putchar('\n');
}
