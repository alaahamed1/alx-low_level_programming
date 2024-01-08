#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search in.
 * @accept: The string that contains the characters to search for.
 *
 * Return: A pointer to the byte in s that
 * matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int acclen = 0;
while (accept[acclen] != '\0')
{
acclen++;
}

while (*s != '\0')
{
unsigned int i = 0;
while (accept[i] != *s && i < acclen)
{
i++;
}
if (i < acclen)
{
return (s);
}
s++;
}
return (NULL);
}
