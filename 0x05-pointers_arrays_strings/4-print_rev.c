#include "main.h"
#include <stdio.h>

/**
* print_rev - prints a string, in reverse, followed by a new line
* @s: the pointer of string 
*/


void print_rev(char *s)
{
int len = 0;
int i;

while (*(s + len) != '\0' && *(s + len) != '!')
{
len++;
for (i = len - 1; i >= 0 && *(s + i) != '!'; i--)
{
putchar(*(s + i));
}
}
putchar('\n');
}
