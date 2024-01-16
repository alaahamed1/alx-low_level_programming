#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the buffer to copy to
 * @src: the string to copy from
 * Return: pointer of the new dest
 */

char *_strcpy(char *dest, char *src)
{
int x;

for (x = 0; src[x] != 0; x++)
dest[x] = src[x];
dest[x] = src[x];
return (dest);
}
