#include <stdio.h>


/**
* main - entry point
* Return:return 0
*/

int main(void)
{
int N;
char L;

for (N = 0; N < 10; N++)
putchar((N % 10) + '0');

for (L = 'a'; L <= 'f'; L++)
putchar(L);

putchar('\n');
return (0);
}
