#include <stdio.h>
#include "main.h"

int main(void)
{
int a[] = {0, 1, 2, 3, 4};
int *p;

/*
* write your line of code here
*you are not allowed to use a
*you are not allowed to modify p
*only one statement
*you are not allowed to code anything else than this line of code
*/

p = &a[0];
*(p + 2) = 98;

printf("a[2] = %d\n", a[2]);

return (0);
}
