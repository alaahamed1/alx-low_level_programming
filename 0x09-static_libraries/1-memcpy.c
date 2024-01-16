#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: A pointer to dest
 */


char *_memcpy(char *dest, const char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
