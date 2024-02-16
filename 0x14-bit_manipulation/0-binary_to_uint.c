#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
