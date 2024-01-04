#include "main.h"

/**
 * _strcmp - compares two strings
 * function should work exactly like strcmp
 * @s1: First string
 * @s2: Second string
 * Return: 0 if the s1 and s2 are equal
 * negative if s1 < s2, positive  if > s2
*/

int _strcmp(const char *s1, const char *s2)
{
while (*s1 == *s2 && *s1 != '\0')
{
s1++;
s2++;
}

if (*s1 == *s2)
{
return 0;
} else {
return (*s1 - *s2);
}
}
