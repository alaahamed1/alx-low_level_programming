#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
int n = 48;
while (n <= 57)
{
putchar(n);
if (n < 57)
{
putchar(',');
putchar(' ');
n++;
}
else
n++;
}
putchar('\n');
return (0);
}
