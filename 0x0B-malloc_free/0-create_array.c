#include <stdio.h>
/**
 *create_array - creates an array of chars
 *and initializes it with a specific char
 * @size: size of the array
 * @c: initialized char.
 * Return:pointer to the array NULL if it fails or size = 0
 */
char *create_array(unsigned int size, char c)
{
    char *arr = (char *)malloc(size * sizeof(char));
    unsigned int i;

    if (size == 0)
    {
        return (NULL);
    }

    if (arr == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        arr[i] = c;
    }
    return (arr);
}
