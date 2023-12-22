#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Return:return 0 (success)
*/

int main(void)
{
int x;

while (x < 10)
{
_putchar(x + '0');
x++;
}
putchar('\n');
return (0);
}
