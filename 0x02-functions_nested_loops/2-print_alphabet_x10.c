#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
char L;
int i;
i = 0;
while (i < 10)
{
for (L = 'a'; L <= 'z'; L++)
{
_putchar(L);
}
_putchar('\n');
i++;
}
}
