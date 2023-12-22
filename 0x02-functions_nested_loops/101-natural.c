#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
int i;
int sum = 0;
for (i = 3; i < 1024; i = i + 3)
{
sum += i;
}

for (i = 5; i < 1024; i = i + 5)
{
if (i % 3 != 0)
{
sum += i;
}
}

printf("%d\n", sum);
return (0);
}
