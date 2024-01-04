#include "main.h"

/**
 * string_toupper - a function that changes
 *  all lowercase letters of a string to uppercase
 * @str: string
 * Return: the new string
*/

char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= ('a' - 'A');
}
i++;
}
return (str);
}
