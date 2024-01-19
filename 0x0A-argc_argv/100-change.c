#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of
 * coins to make change for an amount of money
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	int x, i, count;
	int arr[] = {25, 10, 5, 2, 1};
	int num = sizeof(arr) / sizeof(arr[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	
	count = 0;

	for (i = 0; i < num; i++)
	{
		while (x >= arr[i])
		{
			x -= arr[i];
			count++;
		}
	}

	printf("%d\n", count);
	return (0);
}
