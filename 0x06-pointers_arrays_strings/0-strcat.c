#include "main.h"

/**
 *_strcat - a function that concatenates two strings
 * @dest: the first string
 * @src: the source string to append
 * @return: Returns a pointer to the resulting string dest
 */


char *_strcat(char *dest, char *src)
{
char *tmp = dest;
while (*tmp != '\0')
{
tmp++;
}
while (*src != '\0')
{
*tmp = *src;
tmp++;
src++;
}
*tmp = '\0';

return (dest);

}
