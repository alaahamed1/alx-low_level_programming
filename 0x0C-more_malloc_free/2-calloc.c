#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array and
 * initializes the elements' value with 0
 * @nmemb: number of elements of the array
 * @size: the size of each element
 * Return: pointer to the allocated memory
 * or NULL if failed or size = 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
