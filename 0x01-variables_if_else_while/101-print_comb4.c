#include <stdio.h>
/**
 * main - Entry point
 *
 * this code prints all possible combinations of single-digit numbers.
 * followed by a new line.
 * It is not allowed to use any variable of type char
 * only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * only use putchar four times max in your code
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	n1 = 48;	/* 0 */
	n2 = 49;	/* 1 */
	n3 = 50;	/* 2 */
	while (n1 <= 55)
	{
		n2 = n1 + 1;
		n3 = n2 + 1;

		while (n2 <= 56)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if ((n1 + n2 + n3) != 168)
				{
					putchar(',');
					putchar(' ');
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}

	putchar('\n');
	return (0);
}
