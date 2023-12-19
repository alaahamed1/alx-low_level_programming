#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
int i;
char L;

for (i = 0; i < 10; i++)
{
for (L = 'a'; L <= 'z'; L++)
{
_putchar(L);
}
_putchar('\n');
}
}
