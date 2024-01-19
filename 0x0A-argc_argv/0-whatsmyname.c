#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: size of the argv array
 * @argv: array of command line arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
