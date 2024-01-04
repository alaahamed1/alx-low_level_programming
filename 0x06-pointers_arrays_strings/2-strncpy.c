#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest : first string
 * @src : a string to copy from
 * @n : bytes of string is copied
 * Return : a pointer to the destination string dest
 * Return : the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
