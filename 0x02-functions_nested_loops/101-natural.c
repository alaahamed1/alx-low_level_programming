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
sum += i;
}
for (i = 15; i < 1024; i = i + 15)
{
sum -= i;
}
_putchar("%d\n", sum);
return (0);
}
