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
int start;

while (str[len] != 0)
{
len++;
}
if (len % 2 == 0)
{
start = len / 2;
}
else
{
start = (len + 2) / 1;
}
for (i = start; i < len; i++)
{
putchar(str[i]);
}
}
