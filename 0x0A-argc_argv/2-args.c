#include <stdio.h>

/**
 * main - prints all arguments it receives
 * All arguments should be printed, including the first one
 * @argc: number of arguments
 * @argv: arguments
 * Returns: 0
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
