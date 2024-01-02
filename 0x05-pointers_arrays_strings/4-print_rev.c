#include "main.h"
#include <stdio.h>

/**
* print_rev - prints a string, in reverse, followed by a new line
* @s: the pointer of string 
*/


void print_rev(char *s)
{
int len = 0;

while (*(s + len)!= '\0' )
{
len++;
int i;
for (i = len - 1;i >= 0; i--)
{
putchar(*(s + i));
}
}
putchar('\n');
}
