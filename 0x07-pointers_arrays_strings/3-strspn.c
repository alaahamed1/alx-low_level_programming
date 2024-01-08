#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched
 * @accept: The string containing the characters to match
 *
 * Return: The length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int acclen = 0;
unsigned int len = 0;
unsigned int i;

while (accept[acclen] != '\0')
{
acclen++;
}

while (s[len] != '\0')
{
i = 0;
while (accept[i] != s[len] && i < acclen)
{
i++;
}
if (i >= acclen)
return (len);
len++;
}
return (len);
}
