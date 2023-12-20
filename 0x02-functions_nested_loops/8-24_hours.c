#include "main.h"

/**
* jack_bauer - Prints every minute of the day
*/
void jack_bauer(void)
{
int H = 0, M = 0;

while (H < 24)
{
M = 0;
while (M < 60)
{
_putchar((H / 10) + '0');
_putchar((H % 10) + '0');
_putchar(58);
_putchar((M / 10) + '0');
_putchar((M % 10) + '0');
_putchar('\n');
M++;
}
H++;
}
}
