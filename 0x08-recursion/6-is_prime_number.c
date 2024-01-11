#include "main.h"

/**
 * prime - checks if a number is prime
 * @n: the number to check
 * @x: current divisor
 * Return: true if the number is prime
 */
int prime(int n, int x)
{
	if (x > n / 2)
		return (1);
	if (n % x == 0)
		return (0);
	return (prime(n, x + 1));
}

/**
 * is_prime_number - check if a number is a prime number
 * @n: the number to check
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
