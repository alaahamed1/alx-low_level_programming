#include <stdio.h>

int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
putchar((n / 10) % 10 + '0');
putchar(n % 10 + '0');
if (n < 100)
{
putchar((n < 99) ? ',' : '\n');
putchar((n < 99) ? ' ' : '\0');
}
}

return (0);
}
