#include <stdio.h>
#include <math.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
* Return:return 0
*/
int main(void)
{
long int n;
long int first-factor;
long int i;

n = 612852475143;
first-factor = -1;

while (n % 2 == 0)
{
first-factor = 2;
n = n / 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
first-factor = i;
n = n / i;
}
}
if (n > 2)
first-factor = n;
printf("%ld\n", first-factor);
return (0);
}
