#include <stdio.h>


/**
* main- entry point
* Return:return 0
*/

int main(void)
{
int N = 0;

while (N <= 9)
{
putchar((N % 10) + '0');
if (N != 9)
{
_putchar(',');
_putchar(' ');
}
N++;
}

putchar('\n');
return (0);
}
