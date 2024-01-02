/**
 * _atoi - convert a string to an integer
 * @s: a pointer to the string to convert
*/

int_atoi(char *s)
{
int D = 0;
unsigned int num = 0;

while (*s != 0)
{
if (*s == '-')
D++;
if (*s >= '0' && *s <= '9')
{
while (*s >= '0' && *s <= '9')
{
if (num > 0)
num *= 10;
num += *s - '0';
s++;
}
if (D % 2 != 0)
num = -num;
return (num);
}
s++;
}
return (0);
}
