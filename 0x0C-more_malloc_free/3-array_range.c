#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: an array of integers
 */

int *array_range(int min, int max)
{
	int i;

	if (min > max)
		return (NULL);

	int size = max - min + 1;

	int *ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
