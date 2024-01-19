#include <stdio.h>
#include <stdlib.h>

/**
* main -  multiplies two numbers
* @argc: number of arguments
* @argv: argument
*Returns: 0 if successful and 1 otherwise
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
