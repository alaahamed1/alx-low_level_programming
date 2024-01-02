#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half of a string, followed by a new line
*@str: the pointer of the string
*/


void puts_half(char *str)
{
int len = 0;
int i;

while (str[len] != '\0')
{
len++;
}

int start = (len + 1) / 2;

for (i = start; i < len; i++)
{
putchar(str[i]);
}

// Print a new line
putchar('\n');
}
