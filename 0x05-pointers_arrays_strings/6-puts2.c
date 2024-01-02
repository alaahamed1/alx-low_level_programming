#include "main.h"
#include <stdio.h>

/**
*puts2 - prints every other character of a string
*starting with the first character, followed by a new line
* @str: pointer to a string
*/


void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}

putchar('\n');
}
