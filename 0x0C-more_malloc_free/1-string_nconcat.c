#include <stdlib.h>

/**
 * _strlen - calculate the length of a string
 * @s: the string.
 * Return:number of bytes of the string without the terminating NULL
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1:pointer to the first string
 * @s2:pointer to the second string
 * @n: number of bytes that will be added from s2 to s1
 * Return: a pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = _strlen(s1);
	s2len = _strlen(s2);

	if (n > s2len)
		n = s2len;

	str = malloc(s1len + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[i + s1len] = s2[i];

	str[s1len + n] = '\0';

	return (str);
}
