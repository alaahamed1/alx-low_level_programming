#include <stdio.h>
#include "main.h"

int main(void)
{
int a[] = {0, 1, 2, 3, 4};
int *p;

p = &a[0];
*(p + 2) = 98;

printf("a[2] = %d\n", a[2]);

return (0);
}
