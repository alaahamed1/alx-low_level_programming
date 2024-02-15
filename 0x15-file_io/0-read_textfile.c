#include "main.h"

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
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	n = read(fd, buffer, letters);
	if (n == -1)
	{
		return (0);
	}
	write(STDOUT_FILENO, buffer, n);
	free(buffer);
	close(fd);
	return (n);
}
