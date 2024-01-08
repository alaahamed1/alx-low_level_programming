#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string -function that sets the value of a pointer to a char
 *
 * @s: pointer to a pointer of string
 * @to: pointer to be set
 */

void set_string(char **s, char *to)
{
    free(*s);

    *s = (char *)malloc((strlen(to) + 1) * sizeof(char));

    if (*s == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    strcpy(*s, to);
}
