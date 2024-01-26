#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *and initializes it with a specific char
 * @size: size of the array
 * @c: initialized char.
 * Return:pointer to the array NULL if it fails or size = 0
 */

char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *ptr = (char *)malloc(sizeof(char) * size);

    if (ptr == NULL)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
    {
        *(ptr + i) = c;
    }

    return ptr;
}
