#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13.
 * @s: Pointer to the string to be encoded.
 * Return: Pointer to the encoded string.
 */

char *rot13(char *s)
{
int i;
char *ptr = s;

while (*s)
{
for (i = 0; i < 52; i++)
{
if ((*s >= 'a' && *s <= 'z' && *s == 'a' + (i % 26)) ||
(*s >= 'A' && *s <= 'Z' && *s == 'A' + (i % 26)))
{
*s = (*s <= 'Z') ? 'A' + (i + 13) % 26 : 'a' + (i + 13) % 26;
break;
}
}
s++;
}

return (ptr);
}
