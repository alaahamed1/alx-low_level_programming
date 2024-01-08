#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_string -function that sets the value of a pointer to a char
 * @s: pointer to a pointer of string
 * @to: pointer to be set
 */

void set_string(char **s, char *to)
{
int len = 0;

free(*s);

while (to[len] != '\0')
{
len++;
}

*s = (char *)malloc((len + 1) * sizeof(char));

if (*s == NULL)
{
printf("Memory allocation failed.\n");
return;
}

for (int i = 0; i < len; i++)
{
*(*s + i) = to[i];
putchar(*(*s + i));
}
*(*s + len) = '\0';
}
