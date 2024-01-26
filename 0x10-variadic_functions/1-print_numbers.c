#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: pointer to  char separator
 * @n: number of args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != ((int)n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
