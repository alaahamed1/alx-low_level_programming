#include "main.h"

/**
 * _strlen - returns the length of a string.
 * 
 * @param s: the pointer of the first character of the string
 * Return: len
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}

return (len);
}
