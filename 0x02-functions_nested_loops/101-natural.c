#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * computes and prints the sum of all the multiples of 3 or 5 below 1024
 * 1024 excluded
 * followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i < 1024; i = i + 3)
	{
		sum = sum + i;
	}
	for (i = 5; i < 1024; i = i + 5)
	{
		sum = sum + i;
	}
	for (i = 15; i < 1024; i = i + 15)
	{
		sum = sum - i;
	}
	_putchar("%d\n", sum);
	return (0);
}
