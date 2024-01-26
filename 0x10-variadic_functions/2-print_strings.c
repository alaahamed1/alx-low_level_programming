#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints strings, followed by a new line
 * @separator: pointer to  char separator
 * @n: number of args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != ((int)n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
