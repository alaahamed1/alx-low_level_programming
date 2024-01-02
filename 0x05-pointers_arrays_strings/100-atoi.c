#include <stdio.h>

int _atoi(const char *s)
{
int sign = 1;
int result = 0;

while (*s && (*s < '0' || *s > '9'))
{
if (*s == '-')
{
sign = -sign;
}
s++;
}

while (*s >= '0' && *s <= '9')
{
result = (result * 10) + (*s - '0');
s++;
}

return sign * result;
}

int main()
{
char str[] = "--123abc456";
int num = _atoi(str);
printf("The converted number is: %d\n", num);
return 0;
}
