#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search
 * @c: The character to find
 * Return: Pointer to the first occurrence of
 * the character, or NULL if not found
 */


char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

return (*s == c) ? s : NULL;
}
