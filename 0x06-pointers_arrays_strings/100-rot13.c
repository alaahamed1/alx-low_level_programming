#include "main.h"
#include <stdio.h>

char *rot13(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
char c = s[i];

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
{
s[i] += 13;
}
else
{
s[i] -= 13;
}
}
}

return (s);
}
