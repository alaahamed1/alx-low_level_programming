#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: A pointer to the string to be encoded
 *
 * Return: A pointer to the encoded string
 */


char *rot13(char *s)
{
if (s == NULL)
return NULL;

char *encoded = s;
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *current;

while (*s != '\0')
{
current = strchr(input, *s);
if (current != NULL)
{
*s = output[current - input];
}
s++;
}

return (encoded);
}
