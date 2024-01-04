#include "main.h"

/**
 * _strncat - concatenates two strings
 * appends the src string to the dest string
 * it will use at most n bytes from src
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * src does not need to be null-terminated
 * @dest: first string
 * @src: second string
 * @n: the max number of bytes to concatenate from src
 * Return: pointer to the string dest
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
