#include "main.h"

/**
 * set_string -sets the value of a pointer to a char.
 *
 * @s: pointer to a pointer of string
 * @to: pointer to be set
 */

void set_string(char **s, char *to)
{
	*s = to;
}