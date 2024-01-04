#include "main.h"

/**
 * _strncat - concatenates two strings.
 * appends the src string to the dest string use
 *  at most n bytes from src overwriting
 *  the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * src does not need to be null-terminated
 * @dest: the destination string to append
 * @src: the source string to append from
 * @n: the max number of bytes to print from src
 * Return: pointer to the string dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
