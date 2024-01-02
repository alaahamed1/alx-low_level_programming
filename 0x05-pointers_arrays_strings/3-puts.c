#include "main.h"

/**
* _puts - prints a string, followed by a new line, to stdout
* @str: the pointer of the string
*/

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
