#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
int len;
int i;
char x;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len / 2; i++)
{
x = s[i];
s[i] = s[len - (1 + i)];
s[len - (1 + i)] = x;
}
}
