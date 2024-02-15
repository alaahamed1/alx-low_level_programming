#include "main.h"

int _strlen(char *c)
{
	int i = 0;
	while (*c != '\0')
	{
		i++;
		c++;
	}
	return i;
}

int append_text_to_file(const char *filename, char *text_content)

{
	int fd;
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		printf("error");
		exit(1);
	}
	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}