#include <stdio.h>

/**
 * main - Entry point
 *
 * this code prints all possible combinations of single-digit numbers.
 * followed by a new line.
 * It is not allowed to use any variable of type char
 * only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * only use putchar four times max in your code
 *
 * Return: 0 (Success)
 */

int main(void)
{
int n1, n2, n3;

for (n1 = '0'; n1 <= '7'; n1++)
{
for (n2 = n1 + 1; n2 <= '8'; n2++)
{
for (n3 = n2 + 1; n3 <= '9'; n3++)
{
putchar(n1);
putchar(n2);
putchar(n3);

if (n1 != '7' || n2 != '8' || n3 != '9')
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}
