#include <stdio.h>
/**
 * main - Entry point
 *
 * this code prints the alphabet in lowercase
 * and then in uppercase,followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	char A;

	a = 'a';
	A = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}