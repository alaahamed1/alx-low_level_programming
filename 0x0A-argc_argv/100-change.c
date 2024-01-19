#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of
 * coins to make change for an amount of money
 * @argc: number of coins
 * @argv: argument
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int arr[] = {25, 10, 5, 2, 1};
	int num = sizeof(arr) / sizeof(arr[0]);
	int i, c = 0;
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	if (x < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < num; i++)
	{
		while (x >= arr[i])
		{
			x = x - arr[i];
			c++;
		}
	}
	printf("%d\n", c);
	return (0);
}
