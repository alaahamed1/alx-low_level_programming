#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *_putchar - custom putchar function
 *@c: the character to be written
 *Returns: On success, returns the number of characters written (always 1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * read_textfile - read text file from stdin
 * @filename: the file path if it exists in the same directory
 * @letters: the number of characters to read
 * Returns: On success, returns the number of characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n = 0;
	char *c;

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	n = read(fd, c, letters);
	if (n == -1)
	{
		free(c);
		close(fd);
		return (0);
	}
	write(STDOUT_FILENO, c, n);
	free(c);
	close(fd);
	return (n);
}
