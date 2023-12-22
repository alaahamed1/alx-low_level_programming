#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
int n1, n2;

for (n1 = 0; n1 <= 99; n1++)
{
for (n2 = n1 + 1; n2 <= 99; n2++)
{
printf("%02d %02d", n1, n2);
if (!(n1 == 98 && n2 == 99))
{
printf(", ");
}
}
}

putchar('\n');
return (0);
}
