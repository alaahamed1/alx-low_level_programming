#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @s: the string to encode
 * Return: string pointer
 */

char *leet(char *s)
{
char num[] = "4433007711";
char let[] = "AaEeOoTtLl";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == let[j])
{
s[i] = num[j];
break;
}
}
}
return (s);
}
