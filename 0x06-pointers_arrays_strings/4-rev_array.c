#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the pointer of an array
 * @n: elements of that array
*/

void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;

while (start < end)
{
int tmp = a[start];
a[start] = a[end];
a[end] = tmp;

start++;
end--;
}
}
