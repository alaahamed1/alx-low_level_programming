#include "main.h"
#include <stdio.h>

/**
*puts2 - prints every other character of a string
*starting with the first character, followed by a new line
* @str: pointer to a string
*/


void puts2(char *str)
{
int i;
int len = 0;
while (str[len] != 0)
{
len++;
}
for (i = 0; i < len; i++)
{
if (i % 2 == 0)
putchar(str[i]);
}
}
