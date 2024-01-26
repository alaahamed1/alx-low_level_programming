#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_str(va_list args);
void print_float(va_list args);
void print_char(va_list args);
void print_int(va_list args);
void print_all(const char * const format, ...);

/**
 * print_int - print int
 * @args: number of arguments
 * Return: void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_char - print character
 * @args: number of arguments
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, char));
}

/**
 * print_float - print float
 * @args: number of arguments
 * Return: void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, float));
}

/**
 * print_str - print string
 * @args: number of arguments
 * Return: void
 */
void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
}

/**
 * print_all - function that prints anything
 * @format: string of chars that indicate the format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i , j;
	d_type data_type[] = { 
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	};

	if (format != NULL)
	{
		va_start(args, format);
		i = 0;
		while (format[i] )
		{
			j = 0;
			while(j < 4 && format[i] != data_type[j].id)
			{
				j++;
			}
			if (j < 4 )
			{
				printf("%c", separator);
				data_type[j].func(args);
				separator = ", ";
			}
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
