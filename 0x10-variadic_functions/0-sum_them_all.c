#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -a function that returns the sum of all its parameters
 * @n: number of parameters
 * @sum: sum of all parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	va_list args;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
