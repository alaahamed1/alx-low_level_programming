#include "main.h"

/**
* print_sign - Prints the sign of a number
* Return: 1 if n >  0, 0 if n = 0, -1 if n < 0
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
